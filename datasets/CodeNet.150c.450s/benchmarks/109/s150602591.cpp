#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	string a,b;
	vector<pair<int,int> > time;
	int n,h,m,s,ret;
	int t1,t2;
	int tt[3600*24+1];//??
	
	while(cin >> n && n){
		time.clear();
		ret = 0;
		for(int i=0;i<3600*24;i++)tt[i]=0;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			sscanf(a.c_str(),"%d:%d:%d",&h,&m,&s);
			t1 = h*3600+m*60+s;
			sscanf(b.c_str(),"%d:%d:%d",&h,&m,&s);
			t2 = h*3600+m*60+s;
			for(int k=t1;k<t2;k++){
				tt[k]++;
				ret = max(ret,tt[k]);
			}
		}
		cout << ret << endl;
			
	}
}
	