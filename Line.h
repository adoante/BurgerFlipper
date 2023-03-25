#ifndef LINE_H

#include "Ingrediant.h"
#include <vector>

#define LINE_H

class Line {
    private:
        std::vector<double> amount;
        std::vector<Ingrediant> line;

    public:
        Line();
        Line(std::vector<double>, std::vector<Ingrediant>);
        //Overloads
        friend std::ostream& operator<<(std::ostream&, Line const&);
        //Getters
        std::vector<double> getAmount() const;
        std::vector<Ingrediant> getLine() const;
        //Setters
        void setAmount(std::vector<double>);
        void setLine(std::vector<Ingrediant>);

};

#endif
