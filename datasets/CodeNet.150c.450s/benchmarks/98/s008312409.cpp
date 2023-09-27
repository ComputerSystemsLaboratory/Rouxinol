#include <iostream>
#include <vector>
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
using namespace std;

int main(void){
	int T,H;
	while(cin>>T>>H,T+H){
		vector<int> taro(T),hanako(H);
		int tsum,hsum;
		tsum=hsum=0;
		rep(i,T){
			cin>>taro[i];
			tsum+=taro[i];
		}
		rep(i,H){
			cin>>hanako[i];
			hsum+=hanako[i];
		}
		
		int ttrade=-1,htrade=-1;
		rep(t1,T){
			rep(h1,H){
				if(tsum - taro[t1] + hanako[h1] == hsum - hanako[h1] + taro[t1]){
					ttrade = t1;
					htrade = h1;
					t1 = T;h1 = H; 
				}
			}
		}
		
		if(ttrade != -1)
			cout<< taro[ttrade]<<" "<<hanako[htrade]<<endl;
		else{
			cout<<-1<<endl;
		}
		
	}
}