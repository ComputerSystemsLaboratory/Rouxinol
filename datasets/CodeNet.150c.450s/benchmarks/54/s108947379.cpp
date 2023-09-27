#include<bits/stdc++.h>
using namespace std;

string str1,str2;
int main(){
int i=0;
cin>>str1;
for(int i2=0; i2<str1.size() ;i2++)
		{
		if('A'<=str1[i2] && str1[i2]<='Z') str1[i2]+=32;
		}
while(1)
{	
	cin>>str2;
	if(str2=="END_OF_TEXT") break;
	{for(int i2=0; i2<str2.size() ;i2++)
		{
		if('A'<=str2[i2] && str2[i2]<='Z') str2[i2]+=32;
		}
	if(str1!=str2) 1;
	else i++;
	}
}
cout<<i<<endl;
return 0;
}
