#ifndef INGREDIANT_H

#include <string>

#define INGREDIANT_H

class Ingrediant {
    private:
        std::string name;
    public:
        //Constructors
        Ingrediant();
        Ingrediant(std::string name);

        //Functions
        std::string getName() const;
        
};

#endif
