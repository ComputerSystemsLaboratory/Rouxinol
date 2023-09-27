#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p;
	while(cin>>n>>p,n,p){
		int is[60]={};
		int ap=p;
		int turn=0;
		int win;
		
		while(1){
			if(p!=0){
				is[turn%n]++;
				p--;
				}
			else{
				p=is[turn%n];
				is[turn%n]=0;
				}	
				
				int flg=0;
				for(int i=0;i<n;i++){
					if(is[i]==ap){
						flg=1;
						win=i;
						}
					}
					
					if(flg==1)break;
					turn++;
			}
			cout<<win<<endl;
		}
	return 0;
}