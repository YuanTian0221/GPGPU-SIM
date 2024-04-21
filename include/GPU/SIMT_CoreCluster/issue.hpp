#ifndef ISSUE_HPP
#define ISSUE_HPP

#include "instruction_buffer.hpp"

// 定义WarpScheduler类
class WarpScheduler {
public:
    // 构造函数
    WarpScheduler(I_Buffer& buffer) : instructionBuffer(buffer) {}

    // 获取就绪指令
    std::vector<Instruction> getReadyInstructions() {
        // 在这里实现获取就绪指令的逻辑
        // 这里只是一个简单的示例，假设所有指令都是就绪的
        return instructionBuffer.getAllInstructions();
    }

private:
    I_Buffer& instructionBuffer; // 指令缓冲器
};

// 定义Issue类
class Issue {
public:
    // 构造函数
    Issue(I_Buffer& buffer, WarpScheduler& scheduler) : instructionBuffer(buffer), scheduler(scheduler) {}

    // 发射执行就绪指令
    void executeReadyInstructions() {
        // 从线程束调度器中获取就绪指令
        std::vector<Instruction> readyInstructions = scheduler.getReadyInstructions();

        // 执行就绪指令
        for (const Instruction& inst : readyInstructions) {
            // 在这里执行指令，这里只是一个简单的示例
            executeInstruction(inst);
        }
    }

private:
    I_Buffer& instructionBuffer; // 指令缓冲器
    WarpScheduler& scheduler;    // 线程束调度器

    // 执行指令的方法，这里只是一个简单的示例
    void executeInstruction(const Instruction& inst) {
        // 在这里执行指令，这里只是一个简单的示例
        // 可以根据指令类型和操作数进行相应的操作
    }
};

#endif // ISSUE_HPP
