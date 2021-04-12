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
    return 0;

}