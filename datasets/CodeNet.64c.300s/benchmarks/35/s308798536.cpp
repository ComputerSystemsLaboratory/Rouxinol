#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;
struct dot{
	long long int k,p,l,r;
};
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		int d[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				d[i][j]=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			a--;
			for(int j=0;j<b;j++){
				int c;
				cin>>c;
				d[a][c-1]=1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<d[i][j];
				if(j<n-1)
					cout<<" ";
			}
			cout<<endl;
		}
			
				
	}
	return 0;
}
