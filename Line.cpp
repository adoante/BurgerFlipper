#include "Line.h"

Line::Line() {

}

Line::Line(std::vector<double> a, std::vector<Ingrediant> l) {
    amount = a;
    line = l;
}

std::ostream& operator<<(std::ostream& output, Line const& line) {
    output << "[";
    for (int i = 0; i < line.amount.size(); i++) {
        output << line.amount[i];
        if (i != line.amount.size() - 1) {
            output << ", ";
        }
    }
    output << "]\n";

    output << "[";
    for (int i = 0; i < line.line.size(); i++) {
        output << line.line[i].getName();
        if (i != line.line.size() - 1) {
            output << ", ";
        }
    }
    output << "]\n";
    return output;
}

std::vector<double> Line::getAmount() const {
    return amount;
}

std::vector<Ingrediant> Line::getLine() const {
    return line;
}

void Line::setAmount(std::vector<double> a) {
    amount = a;
}

void Line::setLine(std::vector<Ingrediant> l) {
    line = l;
}


