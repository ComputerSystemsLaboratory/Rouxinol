#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    
    string str;
    int q;
    
    string order, p;
    int a, b;
    
    string str2;
    
    cin >> str >> q;
    
    for(int i = 0; i < q; i++){
        cin >> order >> a >> b;
        
        if(order == "print"){
            cout << str.substr(a, b-a+1) << endl;
        }
        
        if(order == "reverse"){
            for(int k = b; k >= a; k--){
                str2 = str2 + str[k];
            }
            
            str.replace(a, b-a+1, str2);
            str2 = "";
        }
        
        if(order == "replace"){
            cin >> p;
            str = str.replace(a, b-a+1, p);
        }
    }

    return 0;
}
