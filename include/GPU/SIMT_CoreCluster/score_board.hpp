#ifndef SCORE_BOARD_HPP
#define SCORE_BOARD_HPP

#include <vector>
#include "instructions.hpp"

class ScoreBoard {
public:
    // 添加指令到记分牌
    void addInstruction(const Instruction& instruction) {
        instructions.push_back(instruction);
    }

    // 检查指令之间的相关性依赖
    void checkDependencies() {
        // 在这里实现检查指令之间相关性依赖的逻辑
        // 这里只是一个简单的示例，假设所有指令都没有相关性依赖
        for (const auto& inst : instructions) {
            // 这里可以访问每个指令的操作数，并检查是否存在相关性依赖
        }
    }

private:
    std::vector<Instruction> instructions; // 存储指令的容器
};

#endif // SCORE_BOARD_HPP
