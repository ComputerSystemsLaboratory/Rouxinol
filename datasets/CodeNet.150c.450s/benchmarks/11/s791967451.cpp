// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    vector < vector <int> > card;
    int n, number;
    char c;
    std::cin >> n;
    card.resize(4);
    for (int i=0; i<4; i++){
        card[i].resize(13);
        for (int j=0; j<13; j++){
            card[i][j] = 0;
        }
    }
    // exist card
    for (int i=0; i<n; i++){
        std::cin >> c >> number;
        if (c == 'S'){
            card[0][number-1] = 1;
        }
        else if (c == 'H'){
            card[1][number-1] = 1;
        }
        else if (c == 'C'){
            card[2][number-1] = 1;
        }
        else if (c == 'D'){
            card[3][number-1] = 1;
        }
    }
    // print missing cards
    for (int i=0; i<4; i++){
        for (int j=0; j<13; j++){
            if(card[i][j] == 0){
                if(i == 0){
                    std::cout << "S " << j+1 << endl;
                }
                else if(i == 1){
                    std::cout << "H " << j+1 << endl;
                }
                else if(i == 2){
                    std::cout << "C " << j+1 << endl;
                }
                else if(i == 3){
                    std::cout << "D " << j+1 << endl;
                }
            }
        }
    }
    return 0;
}

