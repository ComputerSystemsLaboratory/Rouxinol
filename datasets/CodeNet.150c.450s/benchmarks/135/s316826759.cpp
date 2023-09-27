#include <iostream>
#include <map>

#define MAX_ 1510

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;

	int h[MAX_],w[MAX_];

	while(1){
		cin>>n>>m;
		if(n+m==0) break;

		for(int i1=0;i1<MAX_;i1++){
			h[i1]=0;
			w[i1]=0;
		}


		for(int i1=0;i1<n;i1++){
			cin>>h[i1];
		}
		for(int i1=0;i1<m;i1++){
			cin>>w[i1];
		}

		map<int,int> mh,mw;
		for(int i1=0;i1<n;i1++){
			int ln=0;
			for(int i2=i1;i2<n;i2++){
				ln+=h[i2];
				mh[ln]++;
			}
		}

		for(int i1=0;i1<m;i1++){
			int ln=0;
			for(int i2=i1;i2<m;i2++){
				ln+=w[i2];
				mw[ln]++;
			}
		}

		map<int,int>::iterator ih = mh.begin();
		map<int,int>::iterator iw = mw.begin();
		int count=0;
		while(1){
			if((*ih).first==(*iw).first) {
				count += ((*ih).second*(*iw).second);
				ih++;
				iw++;
			}
			else if((*ih).first>(*iw).first) iw++;
			else ih++;

			if(ih==mh.end() || iw==mw.end()) break;
		}

		cout<<count<<endl;



	}

	return 0;
}