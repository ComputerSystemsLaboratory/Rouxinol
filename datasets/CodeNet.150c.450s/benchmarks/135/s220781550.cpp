#include<bits/stdc++.h> //何故か読み込んでくれないbits/stdc++ (GCC環境は作った気がするけども...)
using namespace std;

int main(){
	//square route
	//参考 : https://muttan1203.hatenablog.com/entry/AOJ_2015 (解説AC)
	
	int N,M;
	cin >> N >> M;
	while(N||M){
		int loop,loop2;
		map<int,int> H;
		map<int,int> W;
		vector<int> h(N);
		vector<int> w(M);
		for(loop=0;loop<N;loop++){
			cin >> h[loop];
		}
		for(loop=0;loop<M;loop++){
			cin >> w[loop];
		}
		int hin,win;
		int hmax=0,wmax=0;
		for(loop=0;loop<N;loop++){
			hin=0;
			for(loop2=loop;loop2<N;loop2++){
				hin+=h[loop2];
				if(H.count(hin)){
					H[hin]++;
				}else{
					H[hin] = 1;
					if(hmax<hin)
						hmax=hin;
				}
			}
		}
		for(loop=0;loop<M;loop++){
			win=0;
			for(loop2=loop;loop2<M;loop2++){
				win+=w[loop2];
				if(W.count(win)){
					W[win]++;
				}else{
					W[win] = 1;
					if(wmax<win){
						wmax=win;
					}
				}
			}
		}
		int maxi=max(hmax,wmax)+1;
		int ans=0;
		for(loop=1;loop<maxi;loop++){
			if(H.count(loop)&&W.count(loop)){
				ans+=H[loop]*W[loop];
			}
		}
		cout << ans << endl;
		cin >> N >> M;
	}
	return 0;
}
