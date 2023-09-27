#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int v;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++){
        cout<<a[i];
        if(i!=n-1)cout<<' ';
    }
    cout<<endl;
    
    for(int i=1; i<n; i++){
        v=a[i];
        int j=i-1;
        for(; j>=0 && v<a[j]; j--){
            a[j+1]=a[j];
           
        }
        a[j+1]=v;
        for(int i=0; i<n; i++){
            cout<<a[i];
            if(i!=n-1)cout<<' ';
        }
        cout<<endl;
    }
}

