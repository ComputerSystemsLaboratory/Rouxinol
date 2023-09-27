#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string word, frequent = "", longest = "";
    map<string, int> mp;
    while(cin >> word){
        mp[word]++;
        if(mp[frequent] < mp[word]){
            frequent = word;
        }
        if(longest.size() < word.size()){
            longest = word;
        }
    }
    cout << frequent << " " << longest << endl;
}