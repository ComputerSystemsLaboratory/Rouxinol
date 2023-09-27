
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int a[100];
    cin>>n;
    while(n!=0){
        for(int i=0;i<100;i++)
            a[i]=1001;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int sum=0;
        for(int i=1;i<n-1;i++)
            sum+=a[i];
        cout<< sum/(n-2) <<"\n";
        cin>>n;}
}