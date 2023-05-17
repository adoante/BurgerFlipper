#include <iostream>
#include <stack>
#include "Ingrediant.h"
#include "Line.h"

int main() {
    
        Ingrediant white_bun_heel = Ingrediant("White Bun Heel", 0.0, true, 3.0, true, "Bun Heel");
        Ingrediant wheat_bun_heel = Ingrediant("Wheat Bun Heel", 0.01, true, 3.0, true, "Bun Hell");
        Ingrediant gluten_free_bun_heel = Ingrediant("Gluten Free Bun Heel", 0.02, true, 3.0, true, "Bun Heel");
        Ingrediant junior_bun_heel = Ingrediant("Junior Bun Heel", 0.03, true, 3.0, true, "Bun Heel");
        Ingrediant slider_bun_heel = Ingrediant("Slider Bun Heel", 0.04, true, 3.0, true, "Bun Heel");
        Ingrediant sourdough_heel = Ingrediant("Sourdough Bun Heel", 0.05, true, 3.0, true, "Bun Heel");
        Ingrediant thousand_island = Ingrediant("1000 Island", 0.1, false, -1.0, true, "Sauce");
        Ingrediant mustard = Ingrediant("Mustard", 0.11, false, -1.0, true, "Sauce");
        Ingrediant mayo = Ingrediant("Mayo", 0.12, false, -1.0, true, "Sauce");
        Ingrediant ketchup = Ingrediant("Ketchup", 0.13, false, -1.0, true, "Sauce");
        Ingrediant huli = Ingrediant("Huli Huli", 0.14, false, -1.0, true, "Sauce");
        Ingrediant spicy_mayo = Ingrediant("Chipotle Aioli", 0.15, false, -1.0, true, "Sauce");
        Ingrediant garlic_aioli = Ingrediant("Garlic Aioli", 0.16, false, -1.0, true, "Sauce");
        Ingrediant blue_cheese_sauce = Ingrediant("Blue Cheese Dressing", 0.17, false, -1.0, true, "Sauce");
        Ingrediant lettuce  = Ingrediant("Lettuce", 0.2, false, -1.0, true, "Vegetable");
        Ingrediant onion = Ingrediant("Onion", 0.21, false, -1.0, true, "Vegetable");
        Ingrediant tomato = Ingrediant("Tomato", 0.22, false, -1.0, true, "Vegetable");
        Ingrediant pickel = Ingrediant("Pickel", 0.23, false, -1.0, true, "Vegetable");
        Ingrediant burger_patty = Ingrediant("6oz Smash Patty", 0.3, true, 6.0, true, "Patty");
        Ingrediant kilauea_patty = Ingrediant("Kilauea Patty", 0.31, true, 6.0, true, "Patty");
        Ingrediant turkey_patty = Ingrediant("Turkey Patty", 0.32, true, 6.0, true, "Patty");
        Ingrediant crispy_chicken = Ingrediant("Crispy Chicken", 0.33, true, 0.0, true, "Patty");
        Ingrediant grilled_chicken = Ingrediant("Grilled Chicken", 0.34, true, 6.0, true, "Patty");
        Ingrediant slider_patty = Ingrediant("Silder Patty", 0.35, true, 4.5, true, "Patty");
        Ingrediant junior_patty = Ingrediant("Junior Patty", 0.36, true, 5.0, true, "Patty");
        Ingrediant tuna = Ingrediant("Tuna", 0.37, false, -1.0, true, "Patty");
        Ingrediant chedder = Ingrediant("Chedder Cheese", 0.4, false, -1.0, true, "Cheese");
        Ingrediant swiss = Ingrediant("Swiss Cheese", 0.41, false, -1.0, true, "Cheese");
        Ingrediant american = Ingrediant("American Cheese", 0.42, false, -1.0, true, "Cheese");
        Ingrediant white_chedder = Ingrediant("White Chedder Cheese", 0.43, false, -1.0, true, "Cheese");
        Ingrediant pepper_jack = Ingrediant("Pepper Jack Cheese", 0.44, false, -1.0, true, "Cheese");
        Ingrediant mixed_chedder_jack = Ingrediant("Mixed Chedder Jack Cheese", 0.45, false, -1.0, true, "Cheese");
        Ingrediant egg = Ingrediant("Fried Egg", 0.51, true, 2.5, true, "Extra");
        Ingrediant bacon = Ingrediant("Bacon", 0.52, true, 3.0, true, "Extra");
        Ingrediant jalapeno = Ingrediant("Jalapeno", 0.53, true, 3.0, true, "Extra");
        Ingrediant pineapple = Ingrediant("Pineapple", 0.54, true, 2.5, true, "Extra");
        Ingrediant avocado = Ingrediant("Avocado", 0.55, false, -1.0, true, "Extra");
        Ingrediant grilled_onions = Ingrediant("Grilled Onions", 0.56, true, 3.0, true, "Extra");
        Ingrediant grilled_mushrooms = Ingrediant("Grilled Mushrooms", 0.57, true, 3.0, true, "Extra");
        Ingrediant chilli = Ingrediant("Chilli", 0.58, false, -1.0, true, "Extra");
        Ingrediant island_reds = Ingrediant("Island Reds", 0.59, false, -1.0, true, "Extra");
        Ingrediant white_bun_crown = Ingrediant("White Bun Crown", 0.8, true, 3.0, true, "Bun Crown");
        Ingrediant wheat_bun_crown = Ingrediant("Wheat Bun Crown", 0.81, true, 3.0, true, "Bun Crown");
        Ingrediant gluten_free_bun_crown = Ingrediant("Gluten Free Bun Crown", 0.82, true, 3.0, true, "Bun Crown");
        Ingrediant junior_bun_crown = Ingrediant("Junior Bun Crown", 0.83, true, 3.0, true, "Bun Crown");
        Ingrediant slider_bun_crown = Ingrediant("Slider Bun Crown", 0.84, true, 3.0, true, "Bun Crown");
        Ingrediant sourdough_crown = Ingrediant("Sourdough Bun Crown", 0.85, true, 3.0, true, "Bun Crown");

    std::vector<Ingrediant> ingrediants = { };
    std::vector<double> amounts = {100, 100, 100, 100, 100, 100, 100};
    Line grill_line = Line(amounts, ingrediants);

    // Quick and Ugly burger build implamentation REFACTOR
    
    std::stack<Ingrediant> build;

    std::cout << "type 'add' then hit enter and type 'name of ingrediant' to add it to the burger build" << std::endl;
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
    if (cmd_input == "quit") { 
        std::cout << "``````````Build``````````" << std::endl;
        while (build.size() > 0) {
            std::cout << build.top().getName() << std::endl;
            build.pop();
        }
    }

    return 0;
}
