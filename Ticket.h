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

    public:
        //Constructors
        Ticket();
        //Overloads
        
        //Getters
        //Setter
        //Functions
        std::vector<Ingrediant> generateTicket(std::vector<Ingrediant>);
        void printTicket(std::vector<Ingrediant>);
};

#endif
