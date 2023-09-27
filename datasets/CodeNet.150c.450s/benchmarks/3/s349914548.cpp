#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int i;
    
    string str;
    cin >> str;
    
    int q;
    cin >> q;
    
    string op;
    int a, b;
    string p;
    
    while(cin >> op){
        if(op == "print"){
            cin >> a >> b;
            for(i = a; i <= b; i++){
                cout.put(str[i]);
            }
            cout << endl;
        }
        else if(op == "reverse"){
            cin >> a >> b;
            reverse(str.begin() + a, str.begin() + b + 1);
            }
        else if(op == "replace"){
            cin >> a >> b >> p;
            for(i = a; i <= b; i++){
                str[i] = p[i - a];
            }
        }else getline(cin, p);
        
    }
    
    return 0;
}