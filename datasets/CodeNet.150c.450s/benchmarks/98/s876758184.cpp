#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int i,n,m;
    while(1){
        cin>>n>>m;
        if(n==0)break;
        
        vector<int> s(n),u(m);
for(i=0;i<n;i++)
cin>>s[i];
for(i=0;i<m;i++)
cin>>u[i];
int sum1=0,sum2=0;
for(i=0;i<n;i++)
sum1+=s[i];
for(i=0;i<m;i++)
sum2+=u[i];
int d=sum1-sum2;
int ans[3]={0,0,1000};
int mem;
int x;
for(i=0;i<n;i++){
    for(int j=0;j<m;j++){
        mem=s[i]-u[j];
        mem=mem*2;
if(d==mem){
x=s[i]+u[j];
if(ans[2]>x){
ans[0]=s[i];
ans[1]=u[j];
ans[2]=x;
}
break;
}
    }
}
if(ans[2]==1000)
cout<<-1<<endl;
else
cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}