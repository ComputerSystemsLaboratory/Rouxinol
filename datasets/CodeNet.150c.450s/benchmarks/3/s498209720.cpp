#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;
int main(){
    string str;
    int p, a, b;
    string command, alt;
    
    string abb ; 
    cin >> str >> p;
    for(int i = 0; i < p; i++){
        cin >> command;
        if(command == "replace"){
            cin >> a >> b >> alt;
            str.replace(a, b-a+1, alt);
            }
        
        if(command == "reverse"){
            cin >> a >> b;
            string rev;
            abb = str.substr(0, a);
            alt = str.substr(b + 1, str.size() - 1);
            
            for(int i = b; i >= a; i--){
                rev += str[i];
            }
            str = abb + rev + alt;
        }
        if(command == "print"){
            cin >> a >> b;
            for(int i = a; i <= b; i++){
                cout << str[i];
            }
            cout << endl;
        } 
    }
    return 0;
    }

    

           