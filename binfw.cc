#include <cstdint>
#include <fstream>
#include <iostream>
#include <vector>
#include <span>


// LCOV_EXCL_START
int main([[maybe_unused]] int argc, char** argv) {
    std::ifstream reader(argv[1]);
    std::vector<std::uint8_t> code;
    uint c;
    while (reader >> std::hex >> c) {
        code.push_back(std::uint8_t(c));
    }

    if (code.empty()) {
        return -1;
    }

    std::cout << code.size() << std::endl;

    std::fstream writer(argv[2], std::ios::out | std::ios::binary);
    writer.write(reinterpret_cast<char*>(&code[0]), code.size());

}
// LCOV_EXCL_STOP