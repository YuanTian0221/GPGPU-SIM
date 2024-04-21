#ifndef INSTRUCTION_BUFFER_HPP
#define INSTRUCTION_BUFFER_HPP

#include <vector>
#include "instructions.hpp"

// 定义指令缓冲类
class I_Buffer {
public:
    I_Buffer() {} // 构造函数

    // 添加指令到缓冲器
    void addInstruction(const Instruction& instruction) {
        buffer.push_back(instruction);
    }

    // 清空缓冲器
    void clearBuffer() {
        buffer.clear();
    }

    // 获取缓冲器中指令数量
    size_t getBufferSize() const {
        return buffer.size();
    }

private:
    std::vector<Instruction> buffer; // 存储指令的容器
};

#endif // INSTRUCTION_BUFFER_HPP
