#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    for(unsigned int i = 1;i <= str.size();i++){
        cout << str.at(str.size()-i);
    }cout << endl;
    
    
    return 0;
}