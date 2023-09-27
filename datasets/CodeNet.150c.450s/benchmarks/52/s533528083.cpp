#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<queue>
#include<complex>
#include<numeric>
#include<bitset>
#define INF 1001001001
#define EPS 0.000000001

using namespace std;
typedef long long Int;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef pair<int,int> pint;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
//int dx[8] = {0,1,1,1,0,-1,-1,-1};
//int dy[8] = {1,1,0,-1,-1,-1,0,1};


int main(){
	int i[100];
	int p=-1;
	int in;
	while(cin >> in){
		if(in==0){
			cout << i[p] << endl;
			p--;
		}
		else{
			p++;
			i[p]=in;
		}
	}
	return 0;
}