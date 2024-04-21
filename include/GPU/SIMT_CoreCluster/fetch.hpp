#ifndef FETCH_HPP
#define FETCH_HPP

#include <vector>
#include <string>
#include "instructions.hpp"


class ProgramCounter {
private:
    unsigned int count; // 程序计数器的值

public:
    // 构造函数，初始化计数器为0
    ProgramCounter() : count(0) {}

    // 获取当前计数器的值
    unsigned int getCount() const {
        return count;
    }

    // 将计数器的值增加1
    void increment() {
        count++;
    }

    // 重置计数器为0
    void reset() {
        count = 0;
    }
};

// 取指单元类，根据程序计数器的值从指令缓存中取出指令
class FetchUnit {
private:

public:
    // 取指函数，根据程序计数器的值获取指令
    Instruction fetchInstruction(ProgramCounter& pc) const {

    }
};



#endif // FETCH_HPP
