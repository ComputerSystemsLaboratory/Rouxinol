#include <iostream>
#include <algorithm>
#include <cmath>
#define INF 1000000000
using namespace std;
int ary[5010],fn[80],ff[80],fl[80],fr[80];

int main(){
	int N;
	while(true){
		cin>>N;
		if(N==0) break;
		for(int i=0;i<N;i++){
			cin>>ary[i];
		}
		int NN=sqrt(N),NNN=(N-1)/NN+1,cnt,hog,hog2;
		for(int i=0;i<NNN;i++){
			hog=hog2=-INF;
			for(int j=NN*i;j<min(NN*(i+1),N);j++){
				for(int k=j;k<min(NN*(i+1),N);k++){
					cnt=0;
					for(int l=j;l<=k;l++){
						cnt+=ary[l];
					}
					hog=max(hog,cnt);
					if(k==min(N,NN*(i+1))-1) hog2=max(hog2,cnt);
					if(j==NN*i&&k==min(N,NN*(i+1))-1) ff[i]=cnt;
				}
				if(j==NN*i) fl[i]=hog;
			}
			fn[i]=hog;
			fr[i]=hog2;
		}
		int res=-INF;
		for(int i=0;i<NNN;i++){
			res=max(res,fn[i]);
			for(int j=i+1;j<NNN;j++){
				hog=0;
				cnt=fr[i]+fl[j];
				for(int k=i+1;k<j;k++){
					cnt+=ff[k];
				}
				res=max(res,cnt);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}