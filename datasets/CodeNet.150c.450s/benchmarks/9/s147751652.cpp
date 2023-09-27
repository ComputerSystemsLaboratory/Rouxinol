#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int S, M, inputLength;
    string input, next;
    while(true) {
        cin >> input;
        if(input == "-") break;

        inputLength = input.size();
        cin >> M;
        for(int i=0; i < M; i++) {
            cin >> S;
            input += input;
            input = input.substr(S, inputLength);
        }
        cout << input << endl;
    }

    return 0;
}