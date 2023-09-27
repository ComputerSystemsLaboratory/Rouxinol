#include<iostream>

using namespace std;

#define HMAX 150
#define WMAX 150

int main(){

	int data[HMAX+1][WMAX+1];
	int h,w;
	int mh,mw;

	for(int i=1;i<=HMAX;i++){
		for(int j=1;j<=WMAX;j++){
			data[i][j]=i*i+j*j;
		}
	}

	while(1){
		cin>>h>>w;
		if(h==0&&w==0) break;
		mh=150,mw=150;
		for(int i=1;i<=HMAX;i++){
			for(int j=i+1;j<=WMAX;j++){
				if((data[h][w]<data[i][j]||(data[h][w]==data[i][j]&&h<i))&&data[i][j]<data[mh][mw]){
					mh=i,mw=j;
				}
			}
		}
		cout<<mh<<" "<<mw<<endl;
	}

}