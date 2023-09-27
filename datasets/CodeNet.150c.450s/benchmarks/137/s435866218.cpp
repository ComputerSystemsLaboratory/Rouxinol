#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;



int main(){
    string cmd, str;
    unordered_set<string> s;
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> cmd;
        cin >> str;
        if(cmd == "insert"){
            s.insert(str);
        }else if(cmd == "find"){
            if(s.count(str) != 0){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
}