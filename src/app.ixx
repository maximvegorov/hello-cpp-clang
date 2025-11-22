module;

#include <iostream>

export module app;

namespace hl {

export class App final {
public:
    static int run() {
        showHello();
        return 0;
    }

private:
    static void showHello() {
        std::cout << "Hello, World!" << std::endl;
    }
};

};  // namespace hl
