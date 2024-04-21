#ifndef REGISTER_FILE_HPP
#define REGISTER_FILE_HPP

#include <vector>

class RegisterFile {
public:
    // 构造函数，初始化寄存器文件大小
    RegisterFile(int num_registers) : registers(num_registers, 0) {}

    // 读取寄存器值
    int readRegister(int reg_id) const {
        return registers[reg_id];
    }

    // 写入寄存器值
    void writeRegister(int reg_id, int value) {
        registers[reg_id] = value;
    }

private:
    std::vector<int> registers; // 寄存器文件
};

#endif // REGISTER_FILE_HPP
