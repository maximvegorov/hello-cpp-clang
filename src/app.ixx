module;

#include <cstdlib>
#include <iostream>

export module app;

namespace hl {

export class App final {
public:
    static int run() {
        showHello();
        return EXIT_SUCCESS;
    }

private:
    static void showHello() {
        std::cout << "Hello, World!" << std::endl;
    }
};

}  // namespace hl
