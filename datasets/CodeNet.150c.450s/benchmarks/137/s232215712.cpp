#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> dict;
    int n;
    cin >> n;
    string cmd, word;
    for(int i = 0; i < n; i++){
        cin >> cmd >> word;
        if(cmd == "insert")
            dict[word.c_str()] = 1;
        else if(cmd == "find"){
            if(dict[word.c_str()] == 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}