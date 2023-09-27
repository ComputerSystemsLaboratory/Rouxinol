#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	int b[10];
	cin>>a;
	
	for(int j=0;j<a;j++){
		
			int flg=0;
			
	for(int i=0;i<10;i++){
		cin>>b[i];
		}
		
		stack<int>ta,tb;
		ta.push(b[0]);
		tb.push(0);
		
		for(int k=1;k<10;k++){
			if(b[k]>ta.top()){ta.push(b[k]);}
			else if(b[k]>tb.top()){tb.push(b[k]);}
			else{
				flg++;
				break;
				}
			}
			if(flg==0){cout<<"YES"<<endl;}
			else{cout<<"NO"<<endl;}
		}
		return 0;
	}