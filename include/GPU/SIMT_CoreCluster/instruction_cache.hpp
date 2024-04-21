#ifndef INSTRUCTION_CACHE_HPP
#define INSTRUCTION_CACHE_HPP

#include <vector>
#include <string>

// 定义指令结构体
struct Instruction {
    int opcode;
    std::string mnemonic;
};

// 定义指令缓存类
class I_Cache {
private:
    std::vector<Instruction> cache;

public:
    I_Cache() {
        // 初始化指令缓存，这里简单地添加一些示例指令
        cache.push_back({1, "ADD"});
        cache.push_back({2, "SUB"});
        cache.push_back({3, "MUL"});
        cache.push_back({4, "DIV"});
    }

    // 根据程序计数器的值从指令缓存中获取指令
    Instruction fetchInstruction(unsigned int pc) const {
        // 假设指令缓存足够大，不做边界检查
        return cache[pc % cache.size()];
    }
};

#endif // INSTRUCTION_CACHE_HPP
