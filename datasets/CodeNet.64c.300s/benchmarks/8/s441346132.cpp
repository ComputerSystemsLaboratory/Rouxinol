#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s=1,s2;
cin>>n;
while(1){
	s2=s;
	s2%=3;
	if(s2==0) cout<<" "<<s;
	else 
	for (s2=s; s2;s2/=10)
		{
		if (s2%10==3) 
			{cout<<" "<<s;
			break;};
		};
	if(s==n) break;
	s++;
	};
cout<<endl;
return 0;
}
