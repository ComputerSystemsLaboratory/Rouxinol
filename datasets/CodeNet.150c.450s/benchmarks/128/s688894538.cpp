#include <iostream>
using namespace std;

int main(){
    string str;
    string newstr;
    while(cin >> str){
        for(int i = 0; i < (int)str.size(); i++){
            newstr.push_back(str[(int)str.size()-i-1]);
        }
        cout << newstr << endl;
        newstr = "";
    }
}