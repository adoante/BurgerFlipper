#include "Ingrediant.h"

Ingrediant::Ingrediant() {
    
}

Ingrediant::Ingrediant(std::string n, double p, bool g, double ct, bool e) {
    name = n;
    precedence = p;
    grillable = g;
    cooktime = ct;
    edible = e;
}

std::ostream& operator<<(std::ostream& output, Ingrediant const& ingrediant) {
    output << "Name: " << ingrediant.name << std::endl;
    output << "Precedence: " << ingrediant.precedence << std::endl;
    output << "Grillable: " << ingrediant.grillable << std::endl;
    output << "Cook Time: " << ingrediant.cooktime << std::endl;
    output << "Edible: " << ingrediant.edible << std::endl;
    return output;
}

std::string Ingrediant::getName() const {
    return name;
}

double Ingrediant::getPrecedence() const {
    return precedence;
}

bool Ingrediant::getGrillable() const {
    return grillable;
}

double Ingrediant::getCooktime() const {
    return cooktime;
}

bool Ingrediant::getEdible() const {
    return edible;
}

void Ingrediant::setName(std::string n) {
    name = n;
}

void Ingrediant::setPrecedence(double p) {
    precedence = p;
}

void Ingrediant::setGrillable(bool g) {
    grillable = g;
}

void Ingrediant::setCooktime(double ct) {
    cooktime = ct;
}

void Ingrediant::setEdible(bool e) {
    edible = e;
}
