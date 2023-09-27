#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
string reverse(string str) {
    string result = "";
    for (int i = str.size()-1;  0 <= i; i--) {
        result += str[i];
    }
    return result;
}
int main(){
    string str;
    int q;
    string command;
    string PRINT = "print";
    string REVERSE = "reverse";
    string REPLACE = "replace";
    int a,b;
    string target;
    cin >> str;
    cin >> q;
    
    for (int i = 0; i < q; i++) {

        cin >> command;
        if (command == PRINT){
            cin >> a >> b;
            // cout << PRINT  << "A : " << a << " B : " << b << endl;
        //    cout << str.substr(a, b+1) <<endl;
           cout << str.substr(a,b - a + 1) << endl;
        }
        if (command == REVERSE) {
            cin >> a >> b;
            // cout << REVERSE  << "A : " << a << " B : " << b << endl;
            str =  str.substr(0,a) + reverse(str.substr(a,b-a+1)) + str.substr(b+1,str.size()-1);
            // cout << str.substr(0,a) << reverse(str.substr(a,b-a+1)) << str.substr(b+1,str.size()-1) << endl; 
            
        } 
        if (command == REPLACE) {
            cin >> a >> b >> target;
            // cout << REPLACE << " A : " << a << " B : " << b << " Target : " << target;
            str = str.replace(a,b-a+1,target);
            // cout << "REPLACED " << str <<  " " <<endl;
            // cout << REPLACE << " : " << str  << endl;
           
        }
        
    }
    
    
    
    return 0;
}