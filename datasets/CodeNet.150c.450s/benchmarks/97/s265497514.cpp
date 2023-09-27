#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;


int main(){

	int N;

	while(cin >> N && !(N == 0)){
		int x=0;
		int y=0;
		pair<int,int> place[201];
		place[0].first = 0;
		place[0].second = 0;
		for(int i = 1; i < N; i++){
			int n,d;
			cin >> n >> d;
			int yy = place[n].first;
			int xx = place[n].second;
		if(d == 0){
			place[i].second = xx - 1;
			place[i].first = yy;
		}
		else if(d == 1){
			place[i].second = xx;
			place[i].first = yy + 1;
		}
		else if(d == 2){
			place[i].second = xx + 1;
			place[i].first = yy;
		}
		else if(d == 3){
			place[i].second = xx;
			place[i].first = yy - 1;
		}
		}
		
		int minX,minY;
		int maxY,maxX;
		
		minX = minY = maxX = maxY = 0;
		for(int i = 0; i < N; i++){
			int xx = place[i].second;
			int yy = place[i].first;
			minX = min(minX,xx);
			maxX = max(maxX,xx);
			minY = min(minY,yy);
			maxY = max(maxY,yy);
		}
		cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
	}	
	
	return 0;
}