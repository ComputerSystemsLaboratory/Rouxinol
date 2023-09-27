#include<bits/stdc++.h>
using namespace std;

string str,str1,str2,str3;
int main(){
int i=0,a=0,b=0;
cin>>str>>i;
for(int i2=0;i2<i;i2++)
	{cin>>str1;
	if(str1=="replace")
		{cin>>a>>b>>str2;
		str.replace(a,b-a+1,str2);
		}
	if(str1=="reverse")
		{cin>>a>>b;
		str2=str.substr(a,b-a+1);
		str.erase(a,b-a+1);
		str3="";
		for(int i3=0;i3<=b-a;i3++)
			{
			str3+=str2[str2.size()-i3-1];
			}
		str.insert(a,str3);
	        
		}
	if(str1=="print")
		{cin>>a>>b;
		cout<<str.substr(a,b-a+1)<<endl;
		}
	}
return 0;
}
