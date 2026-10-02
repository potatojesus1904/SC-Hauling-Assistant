#include <iostream>
#include "hauling/version.hpp"

int main() {
    std::cout << "sc-hauling core version " << hauling::version() << '\n';
    return 0;
}