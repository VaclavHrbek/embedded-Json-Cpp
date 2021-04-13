#include <iostream>
#include "lib.cpp"
#include <filesystem>
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
    
extern char _binary_data_json_start;
extern char _binary_data_json_end;

int main(){
    std::cout << "Hello from program";
    std::filesystem::path path{"../data/data.json"} ;
    json j = Json::loadJson(path);

    char *p = &_binary_data_json_start;
    while(p != &_binary_data_json_end){
        std::cout << *p++;
    }
    return 0;

}