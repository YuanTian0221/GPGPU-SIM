#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    // 打开 JSON 文件
    std::ifstream file("test.json");
    if (!file.is_open()) {
        std::cerr << "Failed to open config.json" << std::endl;
        return 1;
    }

    // 从文件中解析 JSON 数据
    json config;
    try {
        file >> config;
    } catch (json::parse_error& e) {
        std::cerr << "Parse error: " << e.what() << std::endl;
        return 1;
    }

    // 读取配置信息
    std::string projectName = config["project"]["name"];
    std::string compiler = config["build"]["compiler"];
    std::string outputDir = config["project"]["output"];
    // 其他配置信息类似...

    // 打印配置信息
    std::cout << "Project Name: " << projectName << std::endl;
    std::cout << "Compiler: " << compiler << std::endl;
    std::cout << "Output Directory: " << outputDir << std::endl;
    // 其他配置信息类似...

    return 0;
}
