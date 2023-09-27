#include <iostream>

using namespace std;

int main(){
        char s[21];
        cin >> s;
        int n = 0;
        while(*(s+n)){
                n++;
        }   
        for(;n > 0;n--){
                cout << *(s+n-1);
        }   
        cout << endl;
}