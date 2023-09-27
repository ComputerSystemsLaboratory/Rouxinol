#include <cstdio>
#include <cstdlib>
//#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){

	int n, m;
	while (cin >> n >> m, n, m){
		int asum = 0, bsum = 0;
		set<int> a, b;
		for (int i = 0; i < n; i++){
			int buff;
			cin >> buff;
			asum += buff;
			a.insert(buff);
		}
		for (int i = 0; i < m; i++){
			int buff;
			cin >> buff;
			bsum += buff;
			b.insert(buff);
		}

		int sa = asum - bsum;
		if (sa % 2 != 0) cout << -1 << endl;
		else{
			int result1 = 200, result2 = 200;
			sa = sa / 2;
			bool flag = false;
			set<int>::iterator it = a.begin();


			while (it != a.end())
			{
				if (b.find(*it - sa) != b.end()){
					flag = true;
					if (result1 + result2 > *it + *it - sa){
						result1 = *it;
						result2 = *it - sa;
					}
				}
				++it;
			}


			if (!flag) cout << -1 << endl;
			else cout << result1 << " " << result2 << endl;

		}
	}

	return 0;
}

/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/