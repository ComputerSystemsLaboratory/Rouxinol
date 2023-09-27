#include<bits//stdc++.h>
using namespace std;
int sum;
void solve(bool a[50][50],int h, int w, int i, int j){
	for(int z=-1;z<2;z++){
		for(int x=-1;x<2;x++){
			if(i+z>=0&&i+z<h&&j+x>=0&&j+x<w&&a[i+z][j+x]){
				a[i+z][j+x]=false;
				solve(a,h,w,i+z,j+x);
			}
		}
	}
}
int main(){
	int h,w;
	while(cin>>w>>h&&h!=0&&w!=0){
		bool a[50][50];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				int x;
				cin>>x;
				if(x==0) a[i][j]=false;
				else a[i][j]=true;
			}
		}
		sum=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(a[i][j]){
					sum++;
					solve(a,h,w,i,j);
				}
			}
		}
		cout<<sum<<endl;
	}
}