#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    unordered_set<string> dct;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string comm, arg;
        cin >> comm >> arg;
        if(comm=="insert"){
            dct.insert(arg);
        }else{
            cout << ((dct.count(arg)>0)?"yes":"no") << endl;
        }
    }
    
    return 0;
}
