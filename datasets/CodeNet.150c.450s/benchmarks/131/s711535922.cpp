#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <numeric>
#include <sstream>

using namespace std;
typedef long long ll;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)


int main() {

	while(true){		
		int a0,L;cin >> a0 >> L;
		if(a0==0 && L ==0)break;


		int i=0,a=a0;
		vector<int> prev(1000050, -1);
		prev[a]=i;
		while(true){
			stringstream ss;ss << a;
			string stra;ss>> stra;
			while(stra.size()<L)stra='0'+stra;
			sort(stra.begin(),stra.end());
			
			int ma=atoi(stra.c_str());
			//ss.str("");ss << stra; ss>> ma;
			reverse(stra.begin(),stra.end());
			int Ma=atoi(stra.c_str());
			//ss.str("");ss << stra; ss >> Ma;

			a=Ma-ma;
			i++;
			if(prev[a]!=-1){
				cout << prev[a] <<" "<< a <<" "<<i-prev[a]<<endl;
				break;
			}
			prev[a]=i;
		}
	}

	return 0;
}