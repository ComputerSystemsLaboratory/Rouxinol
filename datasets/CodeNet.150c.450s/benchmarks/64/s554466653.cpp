#include <iostream>
using namespace std;

int n,A[20];
int check(int t,int m){
    if(m==0) return 1;
    else if(t==n) return 0;
    int res = check(t+1,m) || check(t+1,m-A[t]);
    return res;
}

int main(){
    int m,p;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> m;
        if(check(0,m)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}