#include <iostream>
#include "myFunction.h"

#define summOfnum(x,y) ((x) + (y))

// Определение функции f
int MyNamespace::f(int a) {
    static int first = 0;
    std::cout << a + first << std::endl;
    first = a;
    return 0;
}

int main() {
    // Вызов функции из пространства имен
    MyNamespace::f(5);
    std::cout << summOfnum(3, 5) << std::endl;
    return 0;
}
