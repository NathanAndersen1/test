#include <iostream>
#include <string>


int main() {
    bool running = true;
    while (running)  {
        int option = 0;
        std::cout << "\n----------------------------------";

        std::cout << "\nWould you like to continue: ";

        std::cin >> option;
        std::cin.ignore();

        std::cout << "\n----------------------------------";
        
        switch (option)
        {
        case 1:

            break;
        case 2:
            std::cout << "\nExiting...";    
            running = false;
            break;
        default:
            std::cout << "\nInvalid answer try again.";
        }
    }
}

