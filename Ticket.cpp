#include "Ticket.h"
#include "Ingrediant.h"
#include <cstdlib>
#include <time.h>
#include <vector>

Ticket::Ticket() {

}

/*
 *  Function takes a vector of ingrediants and generate a random burger order
 *  Every burger has at least a single patty, nothing else required
 *  
 */
std::vector<Ingrediant> Ticket::generateTicket(std::vector<Ingrediant> ingrediants) {
    std::vector<Ingrediant> temp;
    std::srand(time(0));

    for (int i = 0; i < (rand() % 19) + 1; i++) {
        int random_ingrediant = rand() % ingrediants.size();
        temp.push_back(ingrediants[random_ingrediant]);
    }
    return temp;
}

void Ticket::printTicket(std::vector<Ingrediant> ingrediant) {
    std::cout << "*****************************" << std::endl;
    std::cout << "Table: " << (rand() % 400) + 12 << std::endl;
    for (int i = 0; i < ingrediant.size(); i++) {
        std::cout << ingrediant[i].getName() << std::endl;
    } 
    std::cout << "*****************************" << std::endl;
}
