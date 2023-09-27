#include<iostream>
#include<algorithm>

using namespace std;

#define HMAX 10
#define WMAX 5

int main(){

	int H,W;
	int ban[HMAX][WMAX];

	while(1){

		int sum1=0;
		cin>>H;
		if(H==0) break;
		W=5;

		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>ban[i][j];
				sum1+=ban[i][j];
			}
		}

		while(1){
			bool ff=false;
			for(int i=0;i<H;i++){
				for(int j=0;j<W;j++){
					for(int l=W;l>=3;l--){
						bool f=true;
						int base=ban[i][j];
						if(ban[i][j]==-1) f=false;
						for(int k=0;k<l;k++){
							if(j+k>=W) f=false;
							else if(ban[i][j+k]!=base) f=false;
						}
						if(f){
							for(int k=0;k<l;k++){
								ban[i][j+k]=-1;
							}
							ff=true;
						}
					}
				}
			}
			while(1){
				bool f=false;
				for(int i=1;i<H;i++){
					for(int j=0;j<W;j++){
						if(ban[i][j]==-1&&ban[i-1][j]!=-1){
							swap(ban[i][j],ban[i-1][j]);
							f=true;
							ff=true;
						}
					}
				}
				if(!f) break;
			}
			if(!ff) break;
		}

		int sum2=0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(ban[i][j]!=-1) sum2+=ban[i][j];
			}
		}

		cout<<sum1-sum2<<endl;
	}
}