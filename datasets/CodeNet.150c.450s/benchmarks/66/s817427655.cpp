#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

int main(void) {
    int N;
    int M;
    std::string target;
    bool discovery; 
    bool door = false;

    std::cin >> N;
    std::vector<std::string> U(N);
    for (int i = 0; i < N; i++) {
        std::cin >> U[i];
    }
    std::cin >> M;
    for (int i = 0; i < M; i++) {
        discovery = false;
        std::cin >> target;
        for (int j = 0; j < N; j++) {
            if (target == U[j]) {
               discovery = true; 
               break;
            }
        }

        if (discovery == true && door == false) {
            std::cout << "Opened by " << target << std::endl;
            door = true;
        } else if (discovery == true && door == true){
            std::cout << "Closed by " << target << std::endl;
            door = false;
        } else {
            std::cout << "Unknown " << target << std::endl;
        }
    }
    
    return EXIT_SUCCESS;
}