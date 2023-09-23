#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

		int n,y,m,d;
		cin>>n;

			int cnt = 0;
			for(int j=1; j<1000; j++){
				if(j%3 != 0){
					for(int l=1; l<=10; l++){

						int t;
						if(l%2 == 1) t = 20;
						else t= 19;

						for(int k=1; k<=t; k++){
							cnt++;
						}
				    }
				}else{
					for(int l=1; l<=10; l++){
						for(int k=1; k<=20; k++){
							cnt++;
						}
				    }
				}
			}


		for(int i=0; i<n; i++){
			cin>>y>>m>>d;
			int c = 0;
			for(int j=1; j<1000; j++){
				if(j%3 != 0){
					for(int l=1; l<=10; l++){

						int t;
						if(l%2 == 1) t = 20;
						else t= 19;

						for(int k=1; k<=t; k++){
							c++;
							if(j==y && l == m && k == d){
								cout<<cnt - c + 1<<endl;
								break;
							}
						}
				    }
				}else{
					for(int l=1; l<=10; l++){
						for(int k=1; k<=20; k++){
							c++;
							if(j==y && l == m && k == d){
								cout<<cnt - c + 1<<endl;
								break;
							}
						}
				    }
				}
			}

		}		

	return 0;
}