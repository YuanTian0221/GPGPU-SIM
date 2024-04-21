#ifndef OPERAND_COLLECTOR_HPP
#define OPERAND_COLLECTOR_HPP

#include <vector>
#include "operand_info.hpp"

class OperandCollector {
public:
    // 添加操作数信息
    void addOperand(const operand_info& operand) {
        operands.push_back(operand);
    }

    // 获取所有操作数信息
    const std::vector<operand_info>& getAllOperands() const {
        return operands;
    }

    // 清空操作数信息
    void clearOperands() {
        operands.clear();
    }

private:
    std::vector<operand_info> operands; // 存储操作数信息的容器
};

#endif // OPERAND_COLLECTOR_HPP
