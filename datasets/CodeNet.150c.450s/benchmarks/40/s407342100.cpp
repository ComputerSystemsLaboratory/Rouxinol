#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int a[6];
	string s;
	char tmp;
	for(int i=0;i<6;i++)cin>>a[i];
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='N'){
			//swap(s[0],s[4]);
			tmp=a[0];
			a[0]=a[1];
			a[1]=a[5];
			a[5]=a[4];
			a[4]=tmp;

		}
		else if(s[i]=='S'){
			tmp=a[0];
			a[0]=a[4];
			a[4]=a[5];
			a[5]=a[1];
			a[1]=tmp;
		}
		else if(s[i]=='W'){
			tmp=a[0];
			a[0]=a[2];
			a[2]=a[5];
			a[5]=a[3];
			a[3]=tmp;
		}
		else if(s[i]=='E'){
			tmp=a[0];
			a[0]=a[3];
			a[3]=a[5];
			a[5]=a[2];
			a[2]=tmp;
		}
		
	}
		
	cout<<a[0]<<endl;
}
