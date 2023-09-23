#include<iostream>
#include<algorithm>
int ride2(int n){return n*n;}
using namespace std;
int main(){
    int a[3],n;
    cin>>n;
    while(n--){
        for(int i=0;i<3;i++)cin>>a[i];
        sort(a,a+3);
        int judge=ride2(a[2])-ride2(a[0])-ride2(a[1]);
        if(!judge)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}