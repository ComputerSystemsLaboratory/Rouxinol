#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>

#define L 1
#define A 0

using namespace std;

int main(void)
{
	int n;
	string s,a;
	int i1;
	int max;
	int count;
	


	while(1){

		vector<int> v;

		cin >> n;
		if (n == 0) break;


		vector< pair<string,int> > t;


		for(i1=0;i1<n;i1++){
			cin >> s;
			cin >> a;

			t.push_back(make_pair(s,L));
			t.push_back(make_pair(a,A));

		}

		sort(t.begin(),t.end());

		
		v.push_back(t[0].second);
		max=v.size();
		vector<int>::iterator it;

//	for(i1=0;i1<2*n;i1++) cout<<t[i1].second<<endl;


		for(i1=1;i1<2*n;i1++){
//			it = find(v.begin(),v.end(),t[i1].second);

			if(t[i1].second == L) {
				v.push_back(L);
			}
			else {
				v.pop_back();
			}

			if(max < v.size()) max = v.size();
		}

		cout << max << endl;

	}

	return 0;
}