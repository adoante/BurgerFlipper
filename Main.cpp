#include <iostream>
#include "Ingrediant.h"
#include "Line.h"

int main() {
    Ingrediant t = Ingrediant("Tomato", 1.0, false, -1.0, true);
    Ingrediant o = Ingrediant("Onion", 2.0, true, 3.0, true);
    std::cout << t << std::endl;
    std::cout << o << std::endl;

    std::vector<Ingrediant> i = {t, o};
    std::vector<double> a = {100, 89};
    Line l = Line(a, i);

    std::cout << l << std::endl;
    
    return 0;
}
