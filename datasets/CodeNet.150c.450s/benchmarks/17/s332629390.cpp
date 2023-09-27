#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    sort(a,a+5);
    int b[5];
    for(int i=0;i<5;i++){
       b[4-i]=a[i];
    }
    cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<endl;
}
