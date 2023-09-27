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

string table[] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    string in;
    while(T--){
        cin >> in;
        int i = 0;
        int n = in.length();
        
        while(i<n){
            int s = i;
            while(i<n && in[i]!='0'){
                i++;
            }
            if(0<i && in[i-1]-'0'!=0){
                string st = table[in[i-1]-'0'];
                cout << st[(i-s-1)%st.length()];
            }
            i++;
        }
        cout << endl;
    }
    
    return 0;
}