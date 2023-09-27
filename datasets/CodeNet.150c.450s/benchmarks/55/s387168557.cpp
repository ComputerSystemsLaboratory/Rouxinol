#include <iostream>
#include <cctype>
#include <string>
#include <string.h>
using namespace std;
int main(){
    string s;
    while(true){
        
    int a='0',b='0',c='0',d='0',sum = 0;
        cin >> s;
        if(s != "0"){
            for(int i = 0; i < s.length(); i ++){
                sum += s[i] - '0';
            }
            cout << sum << endl;
        } else {
            break;
        }
    }
    return 0;
}
