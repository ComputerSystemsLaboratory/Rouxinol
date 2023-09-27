#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string T;
    int num,h;
    string left, right, Text;
    while(true){
        cin >> T;
        if(T == "-") break;
        cin >> num;
        for (int i=0; i<num; i++){
            cin >> h;
            left = T.substr(0, h);
            right = T.substr(h, T.size()-h);
            T = right+left;
        }
        cout << T << endl;
    }
    return 0;
}