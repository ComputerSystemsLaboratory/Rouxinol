#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        int a[10000];
        for(int i = 0;i < n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum = 0;
        for(int i = 1;i < n-1;i++){
            sum += a[i];
        }
        sum /= n-2;
        cout<<sum<<endl;
    }
    return 0;
}