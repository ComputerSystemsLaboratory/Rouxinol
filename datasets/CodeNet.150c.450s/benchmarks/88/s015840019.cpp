#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int INF=1e9;

int main(){
	int h,w;
	while(cin>>h>>w && h){
		int tai=h*h+w*w;
		int ansh=h,answ,tmptai=INF;
		bool flg=0;
		for(int i=1;i<151;i++){
			for(int j=i+1;j<151;j++){
				int nowtai=i*i+j*j;
				if(nowtai==tai){
					if(i>h){
						ansh=i;answ=j;flg=1;break;
					}
				}
				if(tai<nowtai && nowtai<=tmptai){
					if(nowtai==tmptai){
						if(i<ansh){
							ansh=i;answ=j;tmptai=nowtai;
						}
					}
					else{
						ansh=i;answ=j;tmptai=nowtai;
					}
				}
			}
			if(flg) break;
		}
		cout<<ansh<<" "<<answ<<endl;
	}

	return 0;
}

