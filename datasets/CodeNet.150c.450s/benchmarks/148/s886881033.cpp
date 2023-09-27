#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n ;
    cin >> n;
    
    map < string  , int > mp;
    for(int i = 1 ; i<=n ; i++){
        string s;
        cin >> s;
        mp[ s ] ++;
    }

    vector<string > ord = { "AC", "WA", "TLE","RE" };
    for(auto &s: ord){
        cout<< s <<" x " << mp[s] <<"\n";
    }
}