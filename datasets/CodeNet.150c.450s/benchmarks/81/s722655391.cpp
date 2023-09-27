//2015.6.16 「Convenient Location」
#include<iostream>
using namespace std;

const int INF = 1000000;

int main(){

	while(true){

		int n;		//道の数
		cin >> n;

		if(n==0)
			break;

		int T[10][10];
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(i==j){
					T[i][j]=0;
				}
				else{
					T[i][j]=INF;
				}
			}
		}

		int m = 0;		//町の数	

		for(int i=0;i<n;i++){
			int a,b,c;
			cin >> a >> b >> c;
	
			T[a][b]=T[b][a]=c;

			//町の数を調べる
			if(a+1>m){		//aが大きい数の町の時		
				m=a+1;
			}
			if(b+1>m){		//bが大きい数の町の時	
				m=b+1;
			}
		}
	
		//ワーシャル-フロイト法
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(T[i][j]>T[i][k]+T[k][j]){
						T[i][j]=T[i][k]+T[k][j];
					}
				}
			}
		}

	
		int machi=0;
		int time=INF;
		int time2=0;

		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
	
				if(i!=j){
					time2+=T[i][j];
				}
			}


			if(time>time2){
				time=time2;
				machi=i;
			}
			time2=0;
			

		}
		
		cout << machi << ' ' << time << '\n'; 
	
	}
			

		return 0;
}