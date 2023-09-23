#include <iostream>

using namespace std;

int main(){
    char letter;
    while (cin >> noskipws >>  letter) {
        if(islower(letter)){
            letter = toupper(letter);
        }else {
            letter = tolower(letter);
        }
        cout << letter;
    }

    return 0;
}
