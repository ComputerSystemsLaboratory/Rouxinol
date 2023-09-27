#include<iostream>
#include<set>
#include<algorithm>

using namespace std;


int main(){

    int m;
    cin>> m;
    string s[m];
    for(int i=0; i<m; i++) cin>> s[i];

    for(int i=0; i<m; i++){
        set<string> S;
        for(int j=0; j<s[i].size(); j++){
            string t=s[i].substr(0, j);
            string u=s[i].substr(j);
            S.insert(t+u); S.insert(u+t);
            reverse(t.begin(), t.end());
            S.insert(t+u); S.insert(u+t);
            reverse(u.begin(), u.end());
            S.insert(t+u); S.insert(u+t);
            reverse(t.begin(), t.end());
            S.insert(t+u); S.insert(u+t);
        }
        cout<< S.size()<< endl;
    }

    return 0;
}