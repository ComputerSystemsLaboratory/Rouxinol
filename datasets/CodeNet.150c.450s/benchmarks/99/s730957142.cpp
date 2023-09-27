#include <iostream>
using namespace std;
int n;
string s;
int sum[3];
int a;
int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		sum[0]=sum[1]=sum[2]=0;
		for(int k=0;k<2;k++){
			cin >>s;
			a=1;
			for(int j=0;j<s.size();j++){
				if(s[j]=='m'){
					sum[k]+=a*1000;
					a=1;	
				}else if(s[j]=='c'){
					sum[k]+=a*100;
					a=1;
				}else if(s[j]=='x'){
					sum[k]+=a*10;
					a=1;
				}else if(s[j]=='i'){
					sum[k]+=a;
					a=1;
				}else if(s[j]>='2'&&s[j]<='9'){
					a=s[j]-'0';
				}
			}
		}
		sum[2]=sum[0]+sum[1];
		while(sum[2]!=0){
			if(sum[2]/1000>0){
				if(sum[2]/1000>1)cout<<sum[2]/1000;
				cout <<'m';
				sum[2]=sum[2]%1000;
			}else if(sum[2]/100>0){
				if(sum[2]/100>1)cout<<sum[2]/100;
				cout <<'c';
				sum[2]=sum[2]%100;
			}else if(sum[2]/10>0){
				if(sum[2]/10>1)cout<<sum[2]/10;
				cout <<'x';
				sum[2]=sum[2]%10;
			}else if(sum[2]>0){
				if(sum[2]>1)cout<<sum[2];
				cout <<'i';
				sum[2]=0;
			}
		}
		cout <<endl;
	}
}