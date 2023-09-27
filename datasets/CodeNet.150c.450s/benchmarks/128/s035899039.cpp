#include<iostream>
#include<string>
using namespace std;
int main (){
    string s;
    cin >> s;
     for (int i=0; i<s.size(); i++){
         cout << s[s.size()-i-1] ;
     } cout << endl;
     return 0;
}
