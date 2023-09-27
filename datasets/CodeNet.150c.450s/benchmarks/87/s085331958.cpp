#include <iostream>
#include <vector>
using namespace std;

void d(vector<vector<int>> v,int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

int main (){
	int h;
	while(cin>>h && h){
		vector<vector<int>> v(h,vector<int>(5));
		for(int i=0;i<h;i++)for(int j=0;j<5;j++)cin>>v[i][j];
		int ans=0;
		while(1){
			int flag=true;
			for(int i=0;i<h;i++){
				int chain;
				for(int j=0;j<5;j++){
					chain=1;
					while(j+1<5 && v[i][j]!=-1 && v[i][j]==v[i][j+1]){
						chain++;
						j++;
					}
					if(chain>=3){
						flag=false;
						ans+=chain*v[i][j];
						for(int k=0;k<chain;k++){
							v[i][j-chain+k+1]=-1;
						}
						break;
					}
				}
			}
			//d(v,h);
			for(int p=0;p<h;p++){
				for(int i=0;i<5;i++){
					for(int j=h-1;j>=1;j--){
						if(v[j][i]==-1){
							for(int k=j;k>=1;k--)swap(v[k][i],v[k-1][i]);
						}
					}
				}
			}

			//d(v,h);
			if(flag)break;
		}
		cout<<ans<<endl;
	}


}

/*
5 8 105
8 5 105
1 2 24
99 98 24
12 13 26
1 22 23
1 13 201
13 16 112
2 24 50
1 82 61
1 84 125
1 99 999
99 1 999
98 99 999
1 99 11
99 1 12
0 0 0
*/
