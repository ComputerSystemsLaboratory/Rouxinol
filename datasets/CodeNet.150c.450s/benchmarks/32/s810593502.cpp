#include <bits/stdc++.h>

using namespace std;

using i64 = long long int;
using ui64 = unsigned long long int;

////////

int main(){
    int i,j,k;
    while(cin >> i >> j >> k,i){
        vector<int> a(i);
        for(int l=0;l<i;l++){
            cin >> a[l];
        }
        sort(a.begin(),a.end(),greater<int>());
        int g = -1,s = -1;
        for(int l=j;l<=k;l++){
            if(s <= a[l-1] - a[l]){
                s = a[l-1] - a[l];
                g = l;
            }
        }
        cout << g << endl;
    }
}

