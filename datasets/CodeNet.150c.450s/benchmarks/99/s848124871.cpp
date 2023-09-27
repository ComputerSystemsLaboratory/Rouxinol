#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int x=0;x<n;x++){
		string sa,sb;
		cin>>sa>>sb;
		
		int num[4]={};
		char k[4]={'m','c','x','i'};
		
		for(int i=0;i<sa.size();i++){
			if(sa[i]>='0'&&sa[i]<='9'){
				if(sa[i+1]=='m')num[0]+=sa[i]-'0';
				else if(sa[i+1]=='c')num[1]+=sa[i]-'0';
				else if(sa[i+1]=='x')num[2]+=sa[i]-'0';
				else if(sa[i+1]=='i')num[3]+=sa[i]-'0';
				i++;
				}
				
			else{
				if(sa[i]=='m')num[0]++;
				else if(sa[i]=='c')num[1]++;
				else if(sa[i]=='x')num[2]++;
				else if(sa[i]=='i')num[3]++;
				}	
			}
			
			for(int i=0;i<sb.size();i++){
			if(sb[i]>='0'&&sb[i]<='9'){
				if(sb[i+1]=='m')num[0]+=sb[i]-'0';
				else if(sb[i+1]=='c')num[1]+=sb[i]-'0';
				else if(sb[i+1]=='x')num[2]+=sb[i]-'0';
				else if(sb[i+1]=='i')num[3]+=sb[i]-'0';
				i++;
				}
				
			else{
				if(sb[i]=='m')num[0]++;
				else if(sb[i]=='c')num[1]++;
				else if(sb[i]=='x')num[2]++;
				else if(sb[i]=='i')num[3]++;
				}	
			}
			
			if(num[3]>=10){
				num[3]-=10;
				num[2]+=1;
				}
			if(num[2]>=10){
				num[2]-=10;
				num[1]++;
				}	
			if(num[1]>=10){
				num[1]-=10;
				num[0]++;
				}	
				
				for(int i=0;i<4;i++){
					if(num[i]==1)cout<<k[i];
					else if(num[i]!=0)cout<<num[i]<<k[i];
					}
					cout<<endl;
		}
		return 0;
	}