#include <iostream>
#include "Ingrediant.h"

int main() {
    Ingrediant t = Ingrediant("Tomato", 1.0, false, -1.0, true);
    std::cout << t << std::endl;
    return 0;
}
