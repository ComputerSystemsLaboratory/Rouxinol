#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define NITENKAN(a, b) sqrt(((a.first - b.first) * (a.first - b.first)) + ((a.second - b.second) * (a.second - b.second)))
using namespace std;

bool checkTriIn(pair<double, double> vA, pair<double, double> vB, pair<double, double> vC, pair<double, double> P){
	pair<double, double> center(((vA.first + vB.first + vC.first) / 3), ((vA.second + vB.second + vC.second) / 3));

	vector<pair<double, double> > triangleLine;
	vector<pair<double, double> > centerToVertex;
	pair<double, double> vAvB(vB.first - vA.first, vB.second - vA.second);
	pair<double, double> vBvC(vC.first - vB.first, vC.second - vB.second);
	pair<double, double> vCvA(vA.first - vC.first, vA.second - vC.second);

	triangleLine.push_back(vAvB);
	triangleLine.push_back(vBvC);
	triangleLine.push_back(vCvA);

	pair<double, double> centerP(P.first - center.first, P.second - center.second);
	pair<double, double> centerA(vA.first - center.first, vA.second - center.second);
	pair<double, double> centerB(vB.first - center.first, vB.second - center.second);
	pair<double, double> centerC(vC.first - center.first, vC.second - center.second);

	centerToVertex.push_back(centerA);
	centerToVertex.push_back(centerB);
	centerToVertex.push_back(centerC);

	for(int i = 0; i < 3; i++){
		double cross = triangleLine[i].first * centerP.second - centerP.first * triangleLine[i].second;
		if(cross == 0) continue;
		double r = triangleLine[i].first * centerToVertex[i].second - centerToVertex[i].first * triangleLine[i].second;
		r /= cross;
		double s = centerP.first * centerToVertex[i].second - centerToVertex[i].first * centerP.second;
		s /= cross;

		if(r > 0 && r <= 1 && s > 0 && s <= 1){
			return false;
		}
	}
	return true;
}

int main(){
	pair<double, double> vA, vB, vC, P;

	while(cin >> vA.first >> vA.second >> vB.first >> vB.second >> vC.first >> vC.second >> P.first >> P.second){
		if(checkTriIn(vA, vB, vC, P)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}