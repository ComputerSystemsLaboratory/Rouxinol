#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define bloop(i,a,b) for(int i=b-1;i>=a;i--)
#define brep(i,a) bloop(i,0,a)
using namespace std;

int decode(string s){
	int size=s.size();
	int ans=0;
	rep(i,size){
		if(s[i]=='m'){
			if(i==0)ans+=1000;
			else{
				ans+=(int)(s[i-1]-'0')*1000;
			}
		}else if(s[i]=='c'){
			if(i==0 || isalpha(s[i-1])){
				ans+=100;
			}else{
				ans+=(int)(s[i-1]-'0')*100;
			}
		}else if(s[i]=='x'){
			if(i==0 || isalpha(s[i-1])){
				ans+=10;
			}else{
				ans+=(int)(s[i-1]-'0')*10;
			}
		}else if(s[i]=='i'){
			if(i==0 || isalpha(s[i-1])){
				ans+=1;
			}else{
				ans+=(int)(s[i-1]-'0');
			}
		}
	}
	return ans;
}

string encode(int n){
	int mn=n/1000;
	int cn=(n-mn*1000)/100;
	int xn=(n-mn*1000-cn*100)/10;
	int in=(n-mn*1000-cn*100)%10;
	string ans="";
	if(mn==1)ans+='m';
	else if(mn!=0)ans=ans+(char)(mn+'0')+'m';
	if(cn==1)ans+='c';
	else if(cn!=0)ans=ans+(char)(cn+'0')+'c';
	if(xn==1)ans+='x';
	else if(xn!=0)ans=ans+(char)(xn+'0')+'x';
	if(in==1)ans+='i';
	else if(in!=0)ans=ans+(char)(in+'0')+'i';
	return ans;
}

int main(){
	int n;
	cin>>n;
	rep(z,n){
		string s1,s2;
		cin>>s1>>s2;
		int num1=decode(s1);
		int num2=decode(s2);
		int ans=num1+num2;
		cout<<encode(ans)<<endl;
	}
	return 0;
}