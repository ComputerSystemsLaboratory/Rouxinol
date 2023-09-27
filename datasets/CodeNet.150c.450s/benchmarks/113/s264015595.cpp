#include <iostream>

using namespace std;

int main(){
    int input, count = 1;
    cin >> input;
    while(input != 0){
        cout << "Case " << count << ": " << input << endl;
        count++;
        cin >> input;
    }
}