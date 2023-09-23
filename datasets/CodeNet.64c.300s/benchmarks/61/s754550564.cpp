#include<iostream>
 
using namespace std;
 
int main(){
        int r,c;
		cin>>r>>c;
		int mat[101][101] = {0};
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>mat[i][j];
				mat[i][c]+=mat[i][j];
			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<=c;j++){
				mat[r][j]+=mat[i][j];
			}
		}

		for(int i=0;i<=r;i++){
			for(int j=0;j<=c;j++){
				cout<<mat[i][j];
				if(j==c)
					break;
				cout<<" ";
			}
			cout<<endl;
		}
	return 0;
}