#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		vector<int> a(10);
		for(int j=0;j<10;j++) cin>>a[j];

		bool ok=false;

		for(int j=0;j<(1<<10);j++){
			vector<int> b,_b,c,_c;

			for(int k=0;k<10;k++){
				if(j & (1<<k)) b.push_back(a[k]);
				else c.push_back(a[k]);
			}

			_b=b; _c=c;
			sort(_b.begin(),_b.end());
			sort(_c.begin(),_c.end());

//			reverse(_b.begin(),_b.end());
//			reverse(_c.begin(),_c.end());

			if(b==_b && c==_c){
				cout<<"YES"<<endl;


				ok=true; break;
			}

		}

		if(!ok) cout<<"NO"<<endl;

	}

	return 0;
}