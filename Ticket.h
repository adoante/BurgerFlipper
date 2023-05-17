/* Adolfo Gante
 * Version 0.1
 * 
 * Main point is to randomly generate a burger give vectors of ingrediants
 * 
*/
#ifndef TICKET_H

#include <vector>
#include "Ingrediant.h"

#define TICKET_H

class Ticket {
    private:
        std::vector<Ingrediant> ingrediants;
        bool isNormal;
    public:
        //Constructors
        Ticket();
        Ticket(std::vector<Ingrediant>, bool);        
        //Overloads
        
        //Getters
        std::vector<Ingrediant> getIngrediants() const;
        bool getIsNormal() const;
        //Setter
        void setIngrediants(std::vector<Ingrediant>);
        void setIsNormal(bool);
        //Functions
        std::vector<Ingrediant> generateTicket();
        void printTicket(std::vector<Ingrediant>);
};

#endif
