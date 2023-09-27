#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

string inv(string s){
	int z=s.size();
	string t;
	for(int i=0;i<z;i++)t+=s[z-i-1];
	return t;
}

int main(){
	int n,z,cnt,sw;
	string s,t[568];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		cnt=0;
		z=s.size();
		for(int j=0;j<z-1;j++){
			for(int k=0;k<8;k++){
				if(k==0)t[j*8]=s.substr(0,j+1)+s.substr(j+1,z);
				if(k==1)t[j*8+1]=s.substr(0,j+1)+inv(s.substr(j+1,z));
				if(k==2)t[j*8+2]=inv(s.substr(0,j+1))+s.substr(j+1,z);
				if(k==3)t[j*8+3]=inv(s.substr(0,j+1))+inv(s.substr(j+1,z));
				if(k==4)t[j*8+4]=s.substr(j+1,z)+s.substr(0,j+1);
				if(k==5)t[j*8+5]=inv(s.substr(j+1,z))+s.substr(0,j+1);
				if(k==6)t[j*8+6]=s.substr(j+1,z)+inv(s.substr(0,j+1));
				if(k==7)t[j*8+7]=inv(s.substr(j+1,z))+inv(s.substr(0,j+1));
				sw=0;
				for(int l=0;l<j*8+k;l++)if(t[j*8+k]==t[l])sw=1;
				if(sw==0)cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}