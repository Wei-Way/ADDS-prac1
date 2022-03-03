#include <iostream>

char choose(){
    char player_choice;
    
    std::cout << "Enter r (rock), s (scissors) or p (paper): ";
    std::cin >> player_choice;

    while (player_choice != 'r' && player_choice != 'p' && player_choice!= 's'){
        std::cout << "Enter a valid choice ";
        std::cin >> player_choice;
    }

    std::cout << "You chose: " << player_choice << std::endl;

    return player_choice;
}