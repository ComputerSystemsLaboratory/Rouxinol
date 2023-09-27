#include<bits/stdc++.h>
using namespace std;
int ball[10];
int serch(int now,int B,int C)
{
    if(now==10)return 1;
    if(B<ball[now])return serch(now+1,ball[now],C);
    if(C<ball[now])return serch(now+1,B,ball[now]);
    return 0;
}
int main()
{
    int n,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++)cin>>ball[j];
        ans=serch(0,0,0);
        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}