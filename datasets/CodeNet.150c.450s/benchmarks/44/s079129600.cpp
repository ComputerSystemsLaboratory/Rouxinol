#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define int long long
signed main(){
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	while( scanf("%lld %lld %lld %lld", &a1, &b1, &c1, &d1) != EOF ){
		scanf("%lld %lld %lld %lld", &a2, &b2, &c2, &d2);
		vector<int> listn(10,0);
		listn[a1] = 1;
		listn[b1] = 1;
		listn[c1] = 1;
		listn[d1] = 1;
		int hit=0, blow=0;
		if (a1==a2) hit++;
		else blow += listn[a2];
		if (b1==b2) hit++;
		else blow += listn[b2];
		if (c1==c2) hit++;
		else blow += listn[c2];
		if (d1==d2) hit++;
		else blow += listn[d2];
		cout << hit << " " << blow << endl;
	}
	return 0;
}