/* Adolfo Gante
 * Version 0.1
 *
 * Ingrediant Class is how you create a thing to put on a burger
 * like tomatos or onions and like cheese and stuff y'know edible
 * stuff or not its not like people are gonna eat this stuff
 *
 * Fuck it adding whether or not the ingrediant is edible
 *
*/
#ifndef INGREDIANT_H

#include <string>
#include <iostream>

#define INGREDIANT_H

class Ingrediant {
    private:
        std::string name;
        double precedence;
        bool grillable;
        double cooktime;
        bool edible;
        std::string type;
    public:
        //Constructors
        Ingrediant();
        Ingrediant(std::string name, double precedence, bool grillable, double cooktime, bool edible, std::string type);

        //Overloads
        friend std::ostream& operator<<(std::ostream&, Ingrediant const&);
        
        //Getters
        std::string getName() const;
        double getPrecedence() const;
        bool getGrillable() const;
        double getCooktime() const;
        bool getEdible() const;
        std::string getType() const;
        //Setter
        void setType(std::string);
        void setName(std::string);
        void setPrecedence(double);
        void setGrillable(bool);
        void setCooktime(double);
        void setEdible(bool);

};

#endif
