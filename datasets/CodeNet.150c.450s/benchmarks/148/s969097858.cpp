#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string,int> mp ={ {"RE", 0 }, {"TLE", 0}, {"WA", 0}, {"AC", 0} };
    string str;
    int n;
    cin >>n;
    for (int i =0; i < n; i++){
        cin>>str;
        mp[str]++;
    }

    for (auto m : mp)
        cout << m.first << " x " << m.second <<endl;


}