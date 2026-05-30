// Tactical Health Bar project
#include <iostream>
#include <string>

int main() {
    // Declaring variables
    std::string username;
    int base_health;
    float shield_multiplier;

    // Getting user input
    std::cout << "Enter the character name: ";
    std::cin >> username;

    std::cout << "Enter the base health (1-20): ";
    std::cin >> base_health;
    
    std::cout << "Enter the shield multiplier (e.g., 1.5): ";
    std::cin >> shield_multiplier;

    // Calculate total defensive power of the player
    float total_health = base_health * shield_multiplier;

    // Print final stats of the player
    std::cout << "\n--- Character Stats Matrix ---" << std::endl;
    std::cout << "Name:   " << username << std::endl;
    std::cout << "Health: " << base_health << " HP" << std::endl;
    std::cout << "Shield: x" << shield_multiplier << std::endl;
    std::cout << "Total Defensive Power: " << total_health << std::endl;


    std::cout << "Tactical Interface: [";
    for (int i = 0; i < base_health; i++) {
        std::cout << "█";
    }
    std::cout << "]" << std::endl;

    return 0;
}