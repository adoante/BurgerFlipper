#include <iostream>
#include "Ingrediant.h"

int main() {
    Ingrediant t = Ingrediant("Tomato");
    std::cout << t.getName() << std::endl;
    return 0;
}
