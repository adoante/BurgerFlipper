#include <iostream>
#include <stack>
#include "Ingrediant.h"
#include "Line.h"

int main() {
    std::cout << "``````````Ingrediants``````````" << std::endl;

    Ingrediant bun_heel = Ingrediant("Bun Heel", 0.0, true, 3.0, true);
    //std::cout << bun_heel << std::endl;

    Ingrediant thousand_island = Ingrediant("1000 Island", 0.5, false, -1.0, true);
    //std::cout << thousand_island << std::endl;

    Ingrediant lettuce  = Ingrediant("Lettuce", 1.0, false, -1.0, true);
    //std::cout << lettuce << std::endl;

    Ingrediant onion = Ingrediant("Onion", 1.5, false, -1.0, true);
    //std::cout << onion << std::endl;

    Ingrediant tomato = Ingrediant("Tomato", 2.0, false, -1.0, true);
    //std::cout << tomato << std::endl;

    Ingrediant pickel = Ingrediant("Pickel", 2.5, false, -1.0, true);
    //std::cout << pickel << std::endl;

    Ingrediant bun_crown = Ingrediant("Bun Crown", 3.0, true, 3.0, true);
    //std::cout << bun_heel << std::endl;

    std::cout << "``````````Line``````````" << std::endl;
    std::vector<Ingrediant> ingrediants = {bun_heel, thousand_island, lettuce, onion, tomato, pickel, bun_crown};
    std::vector<double> amounts = {100, 100, 100, 100, 100, 100, 100};
    Line grill_line = Line(amounts, ingrediants);

    //std::cout << grill_line << std::endl;

    // Quick and Ugly burger build implamentation REFACTOR
    
    std::stack<Ingrediant> build;

    std::cout << "type 'add' enter 'name of ingrediant' to add it to the burger build" << std::endl;
    std::cout << "works like a stack bottom -> up" << std::endl;

    std::string cmd_input = "";
    std::string ingrediant_input = "";

    while (true) {
    std::cout << "Command: ";
    std::getline(std::cin, cmd_input);

        if (cmd_input == "quit") {
            break;
        }

        if (cmd_input == "trash") {
            while (build.size() > 0) {
                build.pop();
            }
        }

    std::cout << "Ingrediant: ";
    std::getline(std::cin, ingrediant_input);

    if (cmd_input == "add") {
      //check if ingrediant is on the line
      //if so remove 1 from the line amounts
      for (int i = 0; i < grill_line.getLine().size(); i++) {
          if (ingrediant_input == grill_line.getLine()[i].getName()) {
              std::vector<double> tmp_amounts = amounts;
              tmp_amounts[i] = tmp_amounts[i] - 1;
              grill_line.setAmount(tmp_amounts);
              build.push(grill_line.getLine()[i]);
          }
      } 
    }

    }

    std::cout << "``````````Build``````````" << std::endl;
    while (build.size() > 0) {
        std::cout << build.top().getName() << std::endl;
        build.pop();
    }

    return 0;
}
