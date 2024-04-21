#include <iostream>
#include <string>

class Instruction {
private:
    std::string opcode;
    std::string operand;

public:
    // 构造函数
    Instruction(const std::string& op, const std::string& opr) : opcode(op), operand(opr) {}

    // 获取指令操作码
    std::string getOpcode() const {
        return opcode;
    }

    // 获取指令操作数
    std::string getOperand() const {
        return operand;
    }

    // 设置指令操作码
    void setOpcode(const std::string& op) {
        opcode = op;
    }

    // 设置指令操作数
    void setOperand(const std::string& opr) {
        operand = opr;
    }

    // 打印指令信息
    void print() const {
        std::cout << "Opcode: " << opcode << ", Operand: " << operand << std::endl;
    }
};


