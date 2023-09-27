#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <algorithm>
using namespace std;

typedef pair<int,int> P;
typedef long long LL;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define FOREACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))
#define debug(x)  cerr << #x << " = " << (x) << endl;
#define PI 3.1415926535897
#define INF 1000000000
//#define INF 9

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};


int main(){
	int h,w;
	int i,j;
	int minh = 0,minw = 0;;
	int taikaku;
	long long min = 999999999999999;

	while(1){
		
		cin >> h >> w;
		if(h == 0 &&  w == 0)break;
		min = 99999999999999999;
		taikaku = h * h + w * w;
		
		for(i =1;i <= 150 && i * i < taikaku;i++){
			j = i + 1;
			while(1){//925
				
				int  x = i * i + j * j;

				
				if(x == taikaku){
					if(x < min && h < i ){
						
						min = x;
						minh = i;
						minw = j;
						break;
						
					}
					
				}
				
				if(x > taikaku){
					if(i != h || j != w){
						if(min > x){
							min = x;
							minh = i;
							minw = j;

						}
					}
					break;
				}
			j++;
			}


		}

		cout << minh << " " << minw << endl;
	}
	
	return 0;
}