#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void)
{
	int n,m;
	int i1,i2;
	int sum;
	int c;
	map<int,int>::iterator i;

	while(1){
		cin>>n>>m;
		if(n+m==0) break;

		vector<int> h(n);
		vector<int> w(m);
		map<int,int> hh,ww;
		for(i1=0;i1<n;i1++) cin>>h[i1];
		for(i1=0;i1<m;i1++) cin>>w[i1];

		for(i1=1;i1<=n;i1++){
			sum=0;
			for(i2=0;i2<i1;i2++) sum+=h[i2];
			hh[sum]++;
			for(i2;i2<n;i2++){		
				sum+=h[i2];
				sum-=h[i2-i1];
				hh[sum]++;
			}	
		}

		for(i1=1;i1<=m;i1++){
			sum=0;
			for(i2=0;i2<i1;i2++) sum+=w[i2];
			ww[sum]++;
			for(i2;i2<m;i2++){
				sum+=w[i2];
				sum-=w[i2-i1];
				ww[sum]++;
			}	
		}

		c=0;
		for(map<int,int>::iterator it=hh.begin();it!=hh.end();it++){
			//cout<<it->first<<" "<<it->second<<endl;
			i=ww.find(it->first);
			if(i!=hh.end()) c+=(it->second*i->second);
		}
		//cout<<endl;

		/*for(map<int,int>::iterator it=ww.begin();it!=ww.end();it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
		cout<<endl;*/

		cout<<c<<endl;


	}
	return 0;
} 