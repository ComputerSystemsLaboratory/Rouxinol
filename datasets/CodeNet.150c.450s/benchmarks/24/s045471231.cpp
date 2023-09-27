#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n,m;
	int d,p;
	int sum;

	int i1,i2;

	while(1){
		cin >> n >> m;
		if(n+m==0) break;

		vector<pair<int, int> > michi;
		sum=0;

		for(i1=0;i1<n;i1++){
			cin >> d >> p;
			michi.push_back(make_pair(p,d));
			sum+=d*p;
		}

		sort(michi.begin(), michi.end());
		reverse(michi.begin(), michi.end());


		for(i1=0;i1<michi.size();i1++){
			for(i2=0;i2<michi[i1].second;i2++){
				if(m>0){
					sum-=michi[i1].first;
					m--;
				}
				
			}
			if(m<=0) break;
		}

		cout << sum << endl;



	}

	return 0;
}