#include<iostream>
#include<string>
using namespace std;
char table[4]={'m','c','x','i'};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ak[4]={0},bk[4]={0},ansk[4]={0},now=1;
		string a,b,c;
		cin>>a>>b;
		for(int i=0;i<a.size();i++){
			if(a[i]!='m'&&a[i]!='c'&&a[i]!='x'&&a[i]!='i'){
				now=a[i]-'0';
			}
			else {
				
				for(int j=0;j<4;j++){
					if(table[j]==a[i]){ak[j]=now;}
				}
				now=1;
			}
		}
			for(int i=0;i<b.size();i++){
			if(b[i]!='m'&&b[i]!='c'&&b[i]!='x'&&b[i]!='i'){
				now=b[i]-'0';
			}
			else {
			
				for(int j=0;j<4;j++){
					if(table[j]==b[i]){bk[j]=now;}
				}
					now=1;
			}
		}
		bool kuri=false;
		for(int i=3;i>=0;i--){
			int sum=ak[i]+bk[i];
			if(kuri)sum++;
			if(sum>=10)sum-=10,kuri=true;
			else kuri=false;
			ansk[i]=sum;
		}
			for(int i=0;i<4;i++){
		if(ansk[i]!=0&&ansk[i]!=1)c.push_back(ansk[i]+'0');
		if(ansk[i]!=0)c.push_back(table[i]);
		}
		cout<<c<<endl;
	}

	return 0;
}