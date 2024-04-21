#ifndef ALU_HPP
#define ALU_HPP

#include <cmath>
#include <iostream>

class ALU {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero\n";
            return 0;
        }
        return a / b;
    }
};

class SFU {
public:
    float sin(float x) {
        return std::sin(x);
    }

    float cos(float x) {
        return std::cos(x);
    }

    float tan(float x) {
        return std::tan(x);
    }
};

class TensorCore {
public:
    void multiply(float a, float b) {
        std::cout << "Tensor Core multiplication: " << a * b << std::endl;
    }
};

#endif // ALU_HPP
