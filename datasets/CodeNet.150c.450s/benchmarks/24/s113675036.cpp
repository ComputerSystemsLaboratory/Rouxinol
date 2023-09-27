#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

void swap(int *x, int *y){
    int *temp = x;
    x = y;
    y = temp;
}

void sort(int a[10005][2], int n){
    rep(i,n){
        rep(j,n){
            if(a[j][1] < a[j + 1][1]){
                swap(a[j][0], a[j + 1][0]);
                swap(a[j][1], a[j + 1][1]);
            }
        }
    }
}

int main(){
    int n,m;
    while(cin >> n >> m, n||m){
        int info[10005][2] = {0};
        rep(i,n){
            cin >> info[i][0] >> info[i][1]; 
        }
        sort(info, n);
        for(int i = 0; m && i - 1 != n; i++){
            if(info[i][1] == 0) continue;
            if(m >= info[i][0]){
                m-=info[i][0];
                info[i][0] = 0;
            }else{
                info[i][0]-=m;
                m = 0;
            }
        }
        long long sum = 0;
        rep(i,n){
            sum+=(info[i][0] * info[i][1]);
        }
        cout << sum << endl;
    }
}