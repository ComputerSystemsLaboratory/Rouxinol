#include <iostream>
using namespace std;
int main() {
    string small = "abcdefghijklmnopqrstuvwxyz";
    string big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string inp;
    getline(cin, inp);
    
    for(int i = 0; i < inp.size(); i++){
        for(int j = 0; j < 26; j++){
            if(inp.at(i) == small.at(j)){
                inp.at(i) = big.at(j);
            }
            else if(inp.at(i) == big.at(j)){
                inp.at(i) = small.at(j);
            }
            else{
                continue;
            }
        }
    }
    cout << inp << endl;
    
    return 0;
}

