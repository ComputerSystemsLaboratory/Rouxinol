#include<iostream>
using namespace std;

#define check cout<<"-------"<<endl
#define debug(x) cout<<x<<endl

#define N 101
#define MAX 2001

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int a[N][N];
    int list[MAX];
    
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin>>a[i][j];
        }
    }
    
    int sum = 0, min, mini, i, j;
    int lp = n-1;
    list[0] = 1;
    for(i = 1; i <= n; i++) a[i][1] = -1;
    while(lp--) {
        min = 2001;
        for(i = 0; list[i] !=0; i++) {
            for(j = 1; j <= n; j++) {
                if(min > a[ list[i] ][j] && a[ list[i] ][j] != -1) {
                    min = a[ list[i] ][j];
                    mini = j;
                }
            }
        }
        sum += min;
        list[i] = mini;
        for(int j = 1; j <= n; j++) a[j][mini] = -1;
    }
    
    cout<<sum<<endl;
    
    return 0;
}

