#ifndef SIMT_STACK_HPP
#define SIMT_STACK_HPP

#include <stack>
#include <vector>

class SIMT_Stack {
public:
    // 构造函数
    SIMT_Stack(int warp_size) : warp_size(warp_size) {}

    // 活跃掩码压栈
    void pushActiveMask(const std::vector<bool>& active_mask) {
        active_mask_stack.push(active_mask);
    }

    // 活跃掩码出栈
    void popActiveMask() {
        active_mask_stack.pop();
    }

    // 获取当前活跃掩码
    std::vector<bool> getCurrentActiveMask() const {
        if (active_mask_stack.empty()) {
            return std::vector<bool>(warp_size, true); // 默认为全活跃
        } else {
            return active_mask_stack.top();
        }
    }

private:
    int warp_size; // 线程束大小
    std::stack<std::vector<bool>> active_mask_stack; // 活跃掩码栈
};

#endif // SIMT_STACK_HPP
