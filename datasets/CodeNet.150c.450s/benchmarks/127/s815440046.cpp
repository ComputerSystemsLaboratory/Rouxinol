#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int M;
    cin >> M;
    while(M--){
        string s;
        cin >> s;
        set<string> sset;
        for(int i=1; i<s.length(); i++){
            string a = s.substr(0, i);
            string b = s.substr(i);
            
            sset.insert(a+b);
            sset.insert(b+a);
            reverse(a.begin(), a.end());
            sset.insert(a+b);
            sset.insert(b+a);
            reverse(b.begin(), b.end());
            sset.insert(a+b);
            sset.insert(b+a);
            reverse(a.begin(), a.end());
            sset.insert(a+b);
            sset.insert(b+a);
        }
        
        cout << sset.size() << endl;
    }
    
    return 0;
}