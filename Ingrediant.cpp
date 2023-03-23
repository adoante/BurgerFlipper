#include "Ingrediant.h"

Ingrediant::Ingrediant() {

}

Ingrediant::Ingrediant(std::string n) {
    name = n;
}

std::string Ingrediant::getName() const {
    return name;
}


