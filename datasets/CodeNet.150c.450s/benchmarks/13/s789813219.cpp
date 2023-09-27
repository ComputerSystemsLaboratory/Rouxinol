#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string p;
    cin >> s1 >> p;
    string s2 = s1 + s1;
    if(s2.find(p) != std::string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0; 
}   