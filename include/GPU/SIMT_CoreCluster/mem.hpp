#ifndef MEM_HPP
#define MEM_HPP

#include <iostream>
#include <vector>

class MEM {
public:
    MEM(int size) : memory(size, 0) {}

    void write(int address, int data) {
        if (address < 0 || address >= memory.size()) {
            std::cerr << "Error: Invalid memory address\n";
            return;
        }
        memory[address] = data;
    }

    int read(int address) {
        if (address < 0 || address >= memory.size()) {
            std::cerr << "Error: Invalid memory address\n";
            return 0;
        }
        return memory[address];
    }

private:
    std::vector<int> memory;
};

#endif // MEM_HPP
