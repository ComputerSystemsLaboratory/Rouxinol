#include <iostream>
#include <limits>
#define LL long long

using namespace std;

int main() {
	int n, t, c, recC=-1, minC, maxC, p, maxP, minimumRisk;
	minC = numeric_limits<int>::max();
	maxP = minimumRisk = numeric_limits<int>::min();
	cin >> n;

	for(t=0;t<n;t++){
		cin >> c;

		if(c<minC){
			minC = c;
			maxC = 0;
		} else {
			if(c>maxC){
				maxC = c;
				p = maxC - minC;
				if(p>maxP){
					maxP = p;
				}
			}
		}

		if(recC!=-1){
			p = c - recC;
			if(p>minimumRisk){
				minimumRisk = p;
			}
		}
		recC = c;
	}

	if(maxP==numeric_limits<int>::min()){
		maxP = minimumRisk;
	}

	cout << maxP << endl;

	return 0;
}

