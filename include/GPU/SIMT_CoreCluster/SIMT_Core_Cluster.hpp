#include "instructions.hpp"
#include <vector>
#include <iostream>

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

class InstructionBuffer {
private:
    std::vector<Instruction> buffer; // 存储指令的容器
    size_t capacity; // 缓冲器的最大容量

public:
    // 构造函数，指定缓冲器的最大容量
    InstructionBuffer(size_t capacity) : capacity(capacity) {}

    // 添加指令到缓冲器
    void addInstruction(const Instruction& inst) {
        if (buffer.size() < capacity) {
            buffer.push_back(inst);
        } else {
            // 在实际应用中，你可能希望处理缓冲器已满的情况
            throw std::runtime_error("INS BUFFER ERROR: Capacity exceeded");
        }
    }

    // 清空缓冲器
    void clearBuffer() {
        buffer.clear();
    }

    // 获取指令缓存中的指令数量
    size_t getInstructionCount() const {
        return buffer.size();
    }

    // 获取指定位置的指令
    Instruction& getInstruction(size_t index) {
        if (index < buffer.size()) {
            return buffer[index];
        } else {
            // 在实际应用中，你可能希望处理越界访问的情况
            throw std::out_of_range("INS BUFFER ERROR: Index out of range");
        }
    }
};

// 取指单元类，根据程序计数器的值从指令缓存中取出指令
class InstructionFetchUnit {
private:

public:
    // 取指函数，根据程序计数器的值获取指令
    Instruction fetchInstruction(ProgramCounter& pc) const {

    }
};

