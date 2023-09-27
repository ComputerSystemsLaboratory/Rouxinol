#include<iostream>
#include<string.h>
using namespace std;

int main()
{
bool ok[31];
memset(ok,false,sizeof(ok));
ok[0]=true;
for(int i=0;i<28;i++){
int t;
cin>>t;
ok[t]=true;
}

for(int i=0;i<=30;i++)
if(!ok[i])
cout<<i<<endl;

}