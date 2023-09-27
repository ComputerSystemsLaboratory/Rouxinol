#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    string s, ans1, ans2;
    int longest = 0, many = 0;
    map<string, int> time;
    while(cin >> s){
        if(longest < s.size()){
            longest = s.size();
            ans2 = s;
        }
        time[s]++;
        if(many < time[s]){
            many = time[s];
            ans1 = s;
        }
    }
    rep(i, ans1.size()){
        cout << ans1[i];
    }
    cout << ' ';
    rep(i, ans2.size()){
        cout << ans2[i];
    }
    cout << endl;
}