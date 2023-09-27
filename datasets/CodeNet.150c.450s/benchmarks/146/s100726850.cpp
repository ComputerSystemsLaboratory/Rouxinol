#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <iterator>

#include <cmath>

typedef std::pair<double,double> Vec;
typedef std::pair<Vec,Vec> Line;

Vec operator+(const Vec& lhs, const Vec& rhs) {
	return std::make_pair(lhs.first+rhs.first, lhs.second+rhs.second);
}

Vec operator-(const Vec& lhs, const Vec& rhs) {
	return std::make_pair(lhs.first-rhs.first, lhs.second-rhs.second);
}

Vec lineToVec(const Line& l) {
	return l.first - l.second;
}

double cross(const Vec& lhs, const Vec& rhs) {
  return lhs.first*rhs.second - lhs.second*rhs.first;
}

int main(void){
	using namespace std;

	int n;
	cin >> n;

	vector< pair<Line,Line> > input;
	input.reserve(n);

	for(int i=1; i<=n; i++){
		double x1,y1,x2,y2,x3,y3,x4,y4;
		cin
			>> x1 >> y1
			>> x2 >> y2
			>> x3 >> y3
			>> x4 >> y4;

		auto AB = make_pair( make_pair(x1,y1), make_pair(x2,y2) );
		auto CD = make_pair( make_pair(x3,y3), make_pair(x4,y4) );

		input.push_back(make_pair(AB,CD));
	}

	for(auto itr=input.begin(); itr!=input.end(); itr++){
		auto AB = itr->first;
		auto CD = itr->second;

		auto cr = cross( lineToVec(AB), lineToVec(CD) );

		if( abs(cr) <1e-10 ){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		if( distance( itr, input.end() )>0 ){
			cout << endl;
		}
	}
}