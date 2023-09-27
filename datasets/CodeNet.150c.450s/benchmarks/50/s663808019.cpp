#include<iostream>
using namespace std;

int main()
{
int m;
while(cin>>m){
if(m==0) break;
int ans=0;
m=1000-m;
while(m>=500){
ans++;
m-=500;
}
while(m>=100){
ans++;
m-=100;
}

while(m>=50){
ans++;
m-=50;
}
while(m>=10){
ans++;
m-=10;
}

while(m>=5){
ans++;
m-=5;
}

ans+=m;
cout<<ans<<endl;

}

}