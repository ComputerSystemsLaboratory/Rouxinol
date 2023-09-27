#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <memory>
#include <memory.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
typedef pair<P,P> P2;
const int INF = 1 << 30;
const double EPS = 1E-9;

int c[1000000];
int co[1000000];
int po[300];

int main(){
	int n;
	fill(c, c + 1000000, INF);
	fill(co, co + 1000000, INF);
	c[0] = co[0] = 0;
	for(int i = 0; i < 300; i++){
		po[i] = i * (i + 1) * (i + 2) / 6;
	}
	for(int i = 0; i < 1000000; i++){
		for(int j = 1; j < 300; j++){
			if(i + po[j] >= 1000000) break;
			if(c[i + po[j]] > c[i] + 1){
				c[i+po[j]] = c[i] + 1;
			}
		}
	}
	for(int i = 0; i < 1000000; i++){
		for(int j = 1; j < 300; j++){
			if(!(po[j] & 1)) continue;
			if(i + po[j] >= 1000000) break;
			if(co[i+po[j]] > co[i] + 1){
				co[i+po[j]] = co[i] + 1;
			}
		}
	}
	while(cin >> n && n){
		cout << c[n] << " " << co[n] << endl;
	}
	return 0;
}