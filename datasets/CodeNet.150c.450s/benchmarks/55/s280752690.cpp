#include <iostream>
#include <string>

using namespace std;
 
int main(){
    int SUM;
    string s;
    while(true){
        getline(cin, s);
        if(s=="0") break;
        SUM = 0;
        for(int i=0;i<s.size();i++){
            SUM += s[i] - '0';
        }
        cout << SUM << endl;
    }
}
