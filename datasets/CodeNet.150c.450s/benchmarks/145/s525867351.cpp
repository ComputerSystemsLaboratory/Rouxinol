#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
string a,b[1000],d;
int c[1000];
int main(){
	int top=0;
	d=" ";
	while(cin>>a){
		for(int i=0;i<a.size();i++)
			a[i]=tolower(a[i]);
		if(a.size()>=d.size())
			d=a;
		bool t=true;
		for(int i=0;i<top;i++){
			if(b[i]==a){
				t=false;
				c[i]++;
			}
		}
		if(t==true){
			b[top]=a;
			c[top]=1;
			top++;
		}
	}
	int best=0,set;
	for(int i=0;i<top;i++){
		if(c[i]>best){
			set=i;
			best=c[i];
		}
	}
	cout<<b[set]<<" "<<d<<endl;
	return 0;
}