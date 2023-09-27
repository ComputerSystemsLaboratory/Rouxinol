#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n,sum;
	cin>>n;
	for(int i=0;i<n;i++){
		sum=0;
		for(int k=0;k<2;k++){
			cin>>s;
			for(int j=0;j<s.size();j++){
				switch(s[j]){
					case 'm':
						if(s[max(0,j-1)]>='2'&&s[max(0,j-1)]<='9') sum+=(s[j-1]-'0')*1000;
						else sum+=1000;
						break;
					case 'c':
						if(s[max(0,j-1)]>='2'&&s[max(0,j-1)]<='9') sum+=(s[j-1]-'0')*100;
						else sum+=100;
						break;
					case 'x':
						if(s[max(0,j-1)]>='2'&&s[max(0,j-1)]<='9') sum+=(s[j-1]-'0')*10;
						else sum+=10;
						break;
					case 'i':
						if(s[max(0,j-1)]>='2'&&s[max(0,j-1)]<='9') sum+=(s[j-1]-'0');
						else sum+=1;
						break;
				}
			}
		}
		if(sum/1000>1) cout<<sum/1000<<"m";
		else if(sum/1000==1) cout<<"m";
		if(sum%1000/100>1) cout<<sum%1000/100<<"c";
		else if(sum%1000/100==1) cout<<"c";
		if(sum%100/10>1) cout<<sum%100/10<<"x";
		else if(sum%100/10==1) cout<<"x";
		if(sum%10>1) cout<<sum%10<<"i";
		else if(sum%10==1) cout<<"i";
		cout<<endl;
	}
	return 0;
}
