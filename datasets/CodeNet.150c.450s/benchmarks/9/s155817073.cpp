#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <complex>
using namespace std;

int main() {
    for( ; ; ){
        string str;
        cin >> str;
        if(str == "-"){
            break;
        }
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            str += str.substr(0, x);
            str.erase(str.begin(), str.begin() + x );
        }

        cout << str << endl;

    }

}
