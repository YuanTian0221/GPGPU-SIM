#ifndef DECODE_HPP
#define DECODE_HPP

#include "instruction_cache.hpp"

// 定义解码类
class Decode {
public:
    Decode() {} // 构造函数

    // 解码函数，对取出的指令进行解码
    void decodeInstruction(const Instruction& instruction) const {
        // 这里简单地打印指令的操作码和助记符
        std::cout << "Decoding instruction: Opcode = " << instruction.opcode << ", Mnemonic = " << instruction.mnemonic << std::endl;
    }
};

#endif // DECODE_HPP
