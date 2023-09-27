#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int count = 0;
    string s, p;
    cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    while(cin >> p){
        if(p == "END_OF_TEXT") break;
        std:transform(p.begin(), p.end(), p.begin(), ::toupper);
        if (s == p) {
            count += 1;
        }   
    }
    cout << count << endl;
    return 0;
}