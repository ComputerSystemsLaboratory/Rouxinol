#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int a[10][10000];
int main(){
	int r,c;

	while(true){

	cin>>r>>c;
	if(r==0&&c==0)
		break;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}

	double rrr=r;
	int best=0;

	for(int i=0;i<pow(2,rrr);i++){
		int count=0;

		for(int j=0;j<c;j++){
			int o=0;
			for(int k=0;k<r;k++)
				o+=a[k][j];
			count+=max(o,r-o);
		}
		if(count>best){
			best=count;
		}

		for(int j=0;j<r;j++){
			double jjj=j;
			int jjjjj=pow(2,jjj);
			if((i+1)%jjjjj==0){
				for(int k=0;k<c;k++){
					a[j][k]=(a[j][k]+1)%2;
				}
			}
		}

	}

	cout<<best<<endl;
	}
    return 0;
}