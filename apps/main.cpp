#include <iostream>
#include "lib.cpp"
#include <filesystem>
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

int main(){
    std::cout << "Hello from program";
    std::filesystem::path path{"../data/data.json"} ;
    json j = Json::loadJson(path);
    
    extern char _binary_data_txt_start;
    extern char _binary_data_txt_end;

    char *p = &_binary_data_txt_start;
    while(p != &_binary_data_txt_end){
        std::cout << *p;
    }
    return 0;

}