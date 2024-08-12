#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

// Function to perform linear search
int linearSearch(char places[][50], int n, const char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(places[i], target) == 0) {
            return i; // place found, return its index
        }
    }
    return -1; // place not found
}

int main() {
    // Simulate getch() with cin.get() to wait for user input
    std::cin.get();

    std::ifstream file("./database/ascii_map.txt");
    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "File could not be opened." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Read and print the contents of the file
    char ch;
    while (file.get(ch)) {
        std::cout.put(ch);
    }
    file.close(); // Close the file

    // Printing the list of cities
    std::cin.get(); // Simulate getch()
    std::cout << "\nList of Available cities:\t\t\t\t";
    char cities[][50] = {"Amritsar",
                         "Barnala",
                         "Bathinda",
                         "Firozpur",
                         "Hoshiarpur",
                         "Jalandhar",
                         "Ludhiana",
                         "Mohali",
                         "Muktsar",
                         "Patiala"};

    // Traversing array to print the list of cities
    for (int i = 0; i < 10; i++) {
        std::cout << " " << cities[i] << " ";
    }
    std::cin.get(); // Simulate getch()

    int n = sizeof(cities) / sizeof(cities[0]); // Number of places in the array
    char target[50];
    char d_loc[50];
    std::cout << "\n\nEnter your current location: ";
    std::cin >> target;
    int result = linearSearch(cities, n, target); // Calling linear search function
    if (result != -1) {
        std::cout << "'" << target << "' Locked" << std::endl;
        std::cout << "Enter your destination: ";
        std::cin >> d_loc;
        int desti = linearSearch(cities, n, d_loc);

        if (desti != -1) {
            std::cout << "'" << d_loc << "' Locked" << std::endl;
            std::cin.get(); // Simulate getch()
        } else {
            // Error code for wrong destination location
            std::cout << "'" << d_loc << "' not found in the list of cities." << std::endl;
            std::cin.get(); // Simulate getch()
        }
    } else {
        // Error code for wrong current location
        std::cout << "'" << target << "' not found in the list of cities." << std::endl;
        std::cin.get(); // Simulate getch()
        return 1;
    }

    // Array Cities for comparing the input city of user with the available list of cities
    for (int i = 0; i < 10; i++) {
        if (strcmp(cities[i], target) == 0) {
            switch (result) {
            case 0: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_amr.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Amritsar to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 1: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_bar.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Barnala to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 2: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_bat.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Bathinda to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 3: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_frp.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Firozpur to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 4: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_hsp.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Hoshiarpur to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 5: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_jal.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Jalandhar to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 6: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_lha.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Ludhiana to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 7: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_moh.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Mohali to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 8: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_muk.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Muktsar to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            case 9: {
                char city[100];
                int distance;
                std::ifstream fp("./database/city_pat.txt");
                while (fp >> city >> distance) {
                    if (strcmp(d_loc, city) == 0) {
                        std::cout << "Distance fetched...";
                        std::cin.get(); // Simulate getch()
                        std::cout << "\nDistance from Patiala to " << city << " is " << distance << " km\n";
                        break;
                        // Close the file
                        fp.close();
                    }
                }
                break;
            }
            }
        }
    }
    std::cin.get(); // Simulate getch()
    return 0;
}
