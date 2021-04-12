#include <nlohmann/json.hpp>
#include <filesystem>
#include <iostream>
#include <fstream>

// for convenience
using json = nlohmann::json;


namespace Json 
{
    json loadJson(const std::filesystem::path &path){

        // read a JSON file
        std::ifstream i(path);
        json j;
        i >> j;
        return j;
    }



}