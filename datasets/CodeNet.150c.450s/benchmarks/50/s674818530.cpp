#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
int ca=0;
while(cin>>n&&n!=0){
int m=1000-n;
if(m>=500){
	m-=500;
	ca++;
		}
		if(m>=100){
			int i=m/100;
			ca+=i;
			m-=i*100;
			}
			if(m>=50){
				ca++;
				m-=50;
				}
				if(m>=10){
					int i=m/10;
					ca+=i;
					m-=i*10;
					}
					if(m>=5){
						ca++;
						m-=5;
						}
						if(m>=1){
							int i=m;
							ca+=i;
							}
						
		cout<<ca<<endl;
		ca=0;
		}
		return 0;					
		}