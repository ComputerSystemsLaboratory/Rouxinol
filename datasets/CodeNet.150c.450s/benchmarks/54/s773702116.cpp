#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    int count = 0;
    string word, str;
    cin >> word;
    while(cin >> str){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if(str == word) count++;
    }
    cout << count << endl;
    
    return 0;
    
}