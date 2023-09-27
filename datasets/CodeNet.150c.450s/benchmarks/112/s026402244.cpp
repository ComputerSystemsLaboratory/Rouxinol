#include <iostream>
#include <string>
using namespace std;

string str;

void change(){
    for(char i = 'a' ; i <= 'z' ; i++) str[i] = i;
    for(char i = 'A' ; i <= 'Z' ; i++) str[i] = i;
    for(char i = '0' ; i <= '9' ; i++) str[i] = i;
}

int main(){
    int n;
    
    while(cin >> n,n){
        str = "";
        change();
        char a,b;
        for(int i = 0 ; i < n ; i++){
            cin >> a >> b;
            str[a] = b;
        }
        string tmp = "";
        int m; char c;
        cin >> m;
        for(int i = 0 ; i < m; i++){
            cin >> c;
            tmp += str[c];
        }
        cout << tmp << endl;
    }
    
    return 0;
}