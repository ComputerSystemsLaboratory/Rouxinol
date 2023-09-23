#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int u,k,p,a[100+10]={};
        cin >> u >> k;
        for(int j=0;j<k;j++){
            cin >> p;
            a[p-1]=1;
        }
        cout << a[0];
        for(int l=1;l<n;l++) cout << " " << a[l];
        cout << endl;
    }
}