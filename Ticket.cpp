#include "Ticket.h"

Ticket::Ticket() {
    std::vector<Ingrediant> ingrediants = {};                                                                                                                         
    bool isNormal = true;
}

Ticket::Ticket(std::vector<Ingrediant> i, bool n) {
    std::vector<Ingrediant> ingrediants = i;
    bool isNormal = n;
}

std::vector<Ingrediant> Ticket::getIngrediants() const {
    return ingrediants;
}

bool Ticket::getIsNormal() const {
    return isNormal;
}

void setIngrediants(std::vector<Ingrediant> i) {
    std::vector<Ingrediant> ingrediants = i;
}

void setIsNormal(bool n) {
    bool isNormal = n;
}

std::vector<Ingrediant> generateTicket(std::vector<Ingrediant> ingrediant) {
    std::vector<Ingrediant> temp;

    

    return temp;
    
}

void printTicket(std::vector<Ingrediant> i) {
    std::cout << "Test String" << std::endl;
}
