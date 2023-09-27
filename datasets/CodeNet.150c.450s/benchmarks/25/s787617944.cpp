#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;
const int counter_size = 'z' - 'a' + 1;

int main(){
    string line;
    vector<int> counter(counter_size, 0);
    while(getline(cin, line)){
        for(auto c : line){
            if(isalpha(c)){
                ++counter[tolower(c)-'a'];
            }
        }
    }
    char label = 'a';
    for(auto n : counter){
        cout << label++ << " : " << n << endl;
    }
}