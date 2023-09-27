#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define rep1(i,n) for(int i=1 ; i<=n ; i++)
#define vi vector<int>
#define vii vector<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;

string disp(bool x){
    return x ? "Yes" : "No";
}

void BubbleSort(int n,int x[],string y[]){
    int flag = 1;
    int ok = 0;
    
    while(flag) {
        flag = 0;
        for(int i=n-1 ; i>=ok+1 ; i--){
            if(x[i] < x[i-1]) {
                swap(x[i],x[i-1]);
                swap(y[i],y[i-1]);
                flag = 1;
            }
        }
        ok++;
    }
    
    rep(i,n) cout << y[i] << (i != n-1 ? ' ': '\n');
    return;
 }

void SelectSort(int n,int x[],string y[]){
    rep(i,n){
        int minj = i;
        for(int j=i ; j<n ; j++){
            if(x[minj]>x[j]) minj = j;
        }
        if(x[i]>x[minj]) {
            swap(x[i],x[minj]);
            swap(y[i],y[minj]);
        }
    }
    rep(i,n) cout << y[i] << (i != n-1 ? ' ': '\n');
    return;
}

string check(int n,string x[] , string y[]){
    bool flag = 1;
    rep(i,n){
        if(x[i] != y[i]) flag = 0;
    }
    return(flag ? "Stable" : "Not stable");
}

int main(){
    int n; cin >> n;
    string c[n] ,d[n]; int a[n],b[n];
    rep(i,n) {
        cin >> c[i];
        d[i] = c[i];
        
        a[i] = c[i][1]-'0';
        b[i] = a[i];
    }
    BubbleSort(n, a, c);
    cout << "Stable" << endl;
    SelectSort(n, b, d);
    cout << check(n,c,d) << endl;

}





