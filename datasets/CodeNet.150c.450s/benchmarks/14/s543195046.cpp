#include <bits/stdc++.h>
using namespace std;

int main(){
int N , f, total[10005];
cin>>N;
for(int i=0;i<=N;i++){
f=i/10000;
if(i%3==0&&i!=0) total[i]=i;
else if((i-10000*f)/1000==3)total[i]=i;
else if(i/100%10==3)total[i]=i;
else if(i/10%10==3)total[i]=i;
else if(i%10==3)total[i]=i;
else total[i]=0;
}
for(int i=0;i<=N;i++){
if(total[i]!=0)cout<<" "<<total[i];

}
cout<<endl;

  return 0;
}

