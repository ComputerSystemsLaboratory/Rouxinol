#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,minn,maxn;
    long long int sumn = 0;
    cin >> n;
    int a;
    cin >> a;
    minn = maxn = a;
    sumn += a;
    for(int i = 1; i < n; i++){
        cin >> a;
        if(minn > a){
            minn = a;
        }
        if(maxn < a){
            maxn = a;
        }
        sumn += a;
    }

    cout << minn << " " << maxn << " " << sumn << endl;

}
