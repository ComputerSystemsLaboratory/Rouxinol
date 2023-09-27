#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t

bool loop(){
    int n,r;
    cin >> n >> r;
    vector<int> a;
    
    for(int i = 0 ; i < n ; i++ ){
        a.push_back(i+1);
    }
    if( n == 0 && r == 0 )return false;
    
    for(int i = 0 ; i < r; i++ ){
        int p,c;
        cin >> p >> c;
        p = n + 1 - (c+p);
        for(int j = 0 ; j < c ; j++ ){
            a.push_back(a[p]);
            a.erase(a.begin() + p);
        }
        /*
        for(int j = 0 ; j < n ; j ++ ){
            cout << a[j] << "\t";
        }
        cout << endl;*/
    }
    
    cout << a[n-1] << endl;
    
    return true;
}


int main(void){
    while(loop());
    return 0;
}