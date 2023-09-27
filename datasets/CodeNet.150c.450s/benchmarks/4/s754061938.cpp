// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    int m, f, r;
    while(true){
        std::cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1){
            break;
        }
        // not take midterm or final exam
        else if(m == -1 || f == -1){
            std::cout << "F" << endl;
        }
        // take both midterm and final exam
        else {
            if(m + f >= 80){
                std::cout << "A" << endl;
            }
            else if (m + f >= 65){
                std::cout << "B" << endl;
            }
            else if (m + f >= 50){
                std::cout << "C" << endl;
            }
            else if (m + f >= 30){
                if(r >= 50){
                    std::cout << "C" << endl;
                }
                else {
                    std::cout << "D" << endl;
                }
            }
            else {
                std::cout << "F" << endl;
            }
        }
    }
    return 0;
}

