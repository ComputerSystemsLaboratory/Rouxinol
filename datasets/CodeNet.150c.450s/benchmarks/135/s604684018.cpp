#include <iostream>

using namespace std;
int N,M;
int h[1501],w[1501];
int e;
int ans=0;

int x[1500000];

int main(){
	while(1){
		cin>>N;
		cin>>M;
		if(N==0&&M==0)break;
		for(int i=0; i<1500000; i++){
			x[i]=0;
		}
		for(int i=1; i<=N; i++){
			cin>>h[i];
			h[i]+=h[i-1];
		}
		for(int i=1; i<=M; i++){
			cin>>w[i];
			w[i]+=w[i-1];
			x[w[i]]=1;
		}
		h[0]=0;
		w[0]=0;
		ans=0;
		for(int i=0; i<=N; i++){
			for(int j=0; j<=M; j++){
				for(int k=i+1; k<=N; k++){
					int edgh=h[k]-h[i];
					if(x[w[j]+edgh]){
						// cout<<"h["<<j<<"]:"<<h[j]<<" edgh:"<<edgh<<endl;
						ans++;
					}
					// for(int l=j+1; l<=M; l++){
					// 	if(edgh==w[l]-w[j]){
					// 		cout<<"h["<<j<<"]:"<<h[j]<<" edgh:"<<edgh<<endl;
					// 		ans++;
					// 	}
					// 	if(edgh<=w[l]-w[j])break;
					// }
				}
			}
		}
		cout<<ans<<endl;

		// for(int i=0; i<1500000; i++){
		// 	if(y[i])cout<<"i "<<i<<endl;
		// }
		// cout<<endl;
	}

}