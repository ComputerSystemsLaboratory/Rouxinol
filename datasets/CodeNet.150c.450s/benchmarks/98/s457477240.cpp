#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <set>
using namespace std;


int Total(multiset<int > a){
	int total=0;
	multiset<int >::iterator it = a.begin();
	for (; it != a.end(); it++)	total += *it;
	return total;
}

int main(){
	int n=0,m=0;
	multiset <int > sn,sm;

	while (cin >> n >> m,n,m){
		int nTotal = 0, mTotal=0,flag=0;
		sn.clear();
		sm.clear();
		while (n--){
			int temp;
			cin >> temp;
			nTotal += temp;
			sn.insert(temp);
		}
		while (m--){
			int temp;
			cin >> temp;
			mTotal += temp;
			sm.insert(temp);
		}
		for (multiset<int>::iterator itn = sn.begin(); itn != sn.end(); itn++){
			for (multiset<int>::iterator itm = sm.begin(); itm != sm.end(); itm++){
				if (Total(sn) - *itn + *itm == Total(sm) - *itm + *itn){
					// exe
					cout << *itn << " " << *itm << endl;
					flag = 9;
					break;
				}
			}
			if (flag == 9)	break;
		}
		if (flag != 9)	cout << -1 << endl;
	}
	return 0;
}