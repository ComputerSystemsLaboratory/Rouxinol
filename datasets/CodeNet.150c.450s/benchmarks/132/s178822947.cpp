#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	int n,p;
	while(1){
		cin>>n>>p;
		if(n==0&&p==0) break;
		bool t = false;
		int wan=p,a[50]={},i=0;
		while(1){
			if(wan>0){
				wan--;
				a[i]++;
				bool flag = false;
				if(wan==0){	
					for(int j=0; j<n; j++){
						if(j==i) continue;
						if(a[j]!=0 || t==false) flag = true;
					}
					if(!flag){
						cout<<i<<endl;
						break;
					}
				}

			}else{
				if(a[i]==0){

				}else{
					wan += a[i];
					a[i] = 0;
				}
			}

			t = true;
			
			i++;
			if(i==n) i=0;
		}
	}

	return 0;
}