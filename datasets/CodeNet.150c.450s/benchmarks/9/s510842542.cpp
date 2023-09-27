#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    while(cin >> str){
        if(str == "-") break;
        int num;
        cin >> num;
        int pos;
        for(int i=0; i<num; i++){
            cin >> pos;
            str = str.substr(pos, str.size()) + str.substr(0, pos);
        }
        cout << str << endl;
    }
    
    
    return 0;
}