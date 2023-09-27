#include <iostream>
#include <string>
using namespace std;
int main(void){
    // Your code here!
    string s;
    cin >> s;
    
    for(int i=s.length() - 1; i>=0; i--){
        cout << s[i];
    }
    cout << "\n";
}

