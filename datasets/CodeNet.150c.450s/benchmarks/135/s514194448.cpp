#include<iostream>
#include<vector>

using namespace std;

const int MAX=1500001;
int h[MAX]={0},w[MAX]={0};

int main(){
	int n=0,m=0;
	while(cin>>n>>m){
		if(n==0 || m==0){break;}
		for(int i=0;i<MAX;i++){
			h[i]=w[i]=0;
		}
		int ans=0;
		vector<int> hbuf,wbuf,hdist,wdist;
		hbuf.push_back(0);
		wbuf.push_back(0);
		while(n-->0){
			int htmp=0;
			cin>>htmp;
			hbuf.push_back(hbuf[hbuf.size()-1]+htmp);
		}
		while(m-->0){
			int wtmp=0;
			cin>>wtmp;
			wbuf.push_back(wbuf[wbuf.size()-1]+wtmp);
		}
		for(int i=0;i<hbuf.size();i++){
			for(int j=0;j<i;j++){
				int hd=hbuf[i]-hbuf[j];
				if(h[hd]==0){hdist.push_back(hd);}
				h[hd]++;
			}
		}
		for(int i=0;i<wbuf.size();i++){
			for(int j=0;j<i;j++){
				int wd=wbuf[i]-wbuf[j];
				if(w[wd]==0){wdist.push_back(wd);}
				w[wd]++;
			}
		}
		for(int i=0;i<hdist.size();i++){
			ans+=h[hdist[i]]*w[hdist[i]];
		}
		cout<<ans<<endl;
	}
	return 0;
}