#include<iostream>
#include<string>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		if(N==0)break;
		int da[30][30]={};
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			da[y][x]=1;
		}
		int M;
		cin>>M;
		int dx=10,dy=10;
		for(int i=0;i<M;i++){
			char d;
			int l;
			cin>>d;
			cin>>l;
			if(d=='N'){
				for(int i=1;i<=l;i++){
					dy++;
					da[dy][dx]=0;
				}
			}
			if(d=='E'){
				for(int i=1;i<=l;i++){
					dx++;
					da[dy][dx]=0;
				}
			}
			if(d=='W'){
				for(int i=1;i<=l;i++){
					dx--;
					da[dy][dx]=0;
				}
			}
			if(d=='S'){
				for(int i=1;i<=l;i++){
					dy--;
					da[dy][dx]=0;
				}
			}

		}
		string s="Yes";
		for(int i=0;i<22;i++){
			for(int j=0;j<22;j++){
				if(da[i][j]==1){
					s="No";
					break;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}