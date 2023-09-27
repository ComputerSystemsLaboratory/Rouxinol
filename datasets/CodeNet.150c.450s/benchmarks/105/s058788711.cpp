#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int T,N;
ll A[200];
string S;

int main(){
	cin>>T;
	while(T--){
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>A[i];
		}
		cin>>S;
		ll B[60];
		for(int i=0;i<60;i++){
			B[i]=0;
		}
		bool f=false;
		for(int i=N-1;i>=0;i--){
			if(S[i]=='1'){
				for(int j=59;j>=0;j--){
					if((A[i]>>j)&1){
						A[i]^=B[j];
					}
				}
				if(A[i]){
					f=true;
					break;
				}
			}
			else{
				for(int j=59;j>=0;j--){
					if((A[i]>>j)&1){
						if(B[j])A[i]^=B[j];
						else{
							B[j]=A[i];
							break;
						}
					}
				}
			}
		}
		cout<<f<<endl;
	}
}