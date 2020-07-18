#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {

    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;
    // Using rand function for computer to choose a value. 
    // Adding + 1 so it will choose a value between 1-3 otherwise it would be 0-2

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";

    std::cout << "Shoot! ";

    // User choice calculation
    std::cin >> user;
    if (user == 1) {
        std::cout << "You choose Rock\n";
    }
    else if(user == 2) {
        std::cout << "You choose Paper\n";
    }
    else if(user == 3) {
        std::cout << "You choose Scissors\n";
    }

    // CPU choice calculation
    if (computer == 1) {
        std::cout << "CPU choose Rock\n";
    }
    else if(computer == 2) {
        std::cout << "CPU choose Paper\n";
    }
    else if(computer == 3) {
        std::cout << "CPU choose Scissors\n";
    }

    // Output display
    // If there is a tie
    if (user == computer) {
        std::cout << "It is a tie";
    }

    // If User chooses Rock & CPU Paper. CPU win 
    else if(user == 1 && computer == 2) {
        std::cout << "You lost to a robot human. How does it feel?";
    }
    // If User chooses Rock & CPU Scissors. User win
    else if(user == 1 && computer == 3) {
        std::cout << "The Robot losses. You win for now human";
    }
    // If User chooses Paper & CPU Rock. User win
    else if(user == 2 && computer == 1) {
        std::cout << "The Robot has failed. The human triumphs";
    }
    // If User chooses Paper & CPU Scissors. CPU win 
    else if(user == 2 && computer == 3) {
        std::cout << "How does it feel to be a loser human?";
    }
    // If user chooses Scissors & CPU Rock. CPU win
    else if(user == 3 && computer == 1) {
        std::cout << "I really enjoy this 'Winning' human";
    }
    // If User chooses Scissors & CPU Paper. User win
    else if(user == 3 && computer == 2) {
        std::cout << "You win this time, human. But I will return";
    }

}