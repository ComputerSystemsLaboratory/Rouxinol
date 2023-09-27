#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int solve(string s){
    typedef set<string> set_s;
    set_s S;
    for(int i=1;i<s.size();i++){
        string s1,s1r,s2,s2r,kouho1,kouho2,kouho3,kouho4,kouho5,kouho6,kouho7,kouho8;
        s1r = s.substr(0,i);
        reverse(s1r.begin(),s1r.end());
        s2r = s.substr(i);
        reverse(s2r.begin(),s2r.end());
        s1 = s.substr(0,i);
        s2 = s.substr(i);

        kouho1 = s1 + s2;
        kouho2 = s1 + s2r;
        kouho3 = s1r + s2;
        kouho4 = s1r + s2r;
        kouho5 = s2 + s1;
        kouho6 = s2 + s1r;
        kouho7 = s2r + s1;
        kouho8 = s2r + s1r;

        S.insert(kouho1);
        S.insert(kouho2);
        S.insert(kouho3);
        S.insert(kouho4);
        S.insert(kouho5);
        S.insert(kouho6);
        S.insert(kouho7);
        S.insert(kouho8);
    }
    return S.size();
}

int main(){
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        cout << solve(s) << endl;
    }
}