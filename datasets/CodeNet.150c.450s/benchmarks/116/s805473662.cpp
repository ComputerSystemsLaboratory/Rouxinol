#include<iostream>
#include<vector>
using namespace std;
int main(){
    while(1){
    int n,k;
    cin >> n >> k;
    if(n==0 && k==0){
        break;
    }
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int s=0;
    int m=0;

    while(s+k-1<n){
        int cm=0;
        for(int j=0; j<k; j++){
            cm+=a[s+j];
        }
    if(cm>m){
        m=cm;
    }
    s++;
    }
    cout << m << endl;
    }
}
