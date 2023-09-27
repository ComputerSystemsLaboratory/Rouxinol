#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,s,ans;
void func(int num,int goukei,int now){
    if(num==n&&goukei==s){
        //cout<<num<<" "<<goukei<<" "<<now<<endl;
        ans++;
        return;
    }
    if(num>n||goukei>s||now>9)return;
    func(num+1,goukei+now,now+1);
    func(num,goukei,now+1);
}
int main(){
    for(;;){
        ans=0;
        cin>>n>>s;
        if(n==0&&s==0)break;
        func(0,0,0);
        cout<<ans<<endl;
    }
    return 0;
}