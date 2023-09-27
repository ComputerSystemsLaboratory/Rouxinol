#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <utility>
#include <climits>
#include <cstring>
#include <cstdio>

using namespace std;
typedef long long int llg;

const int INF = 1000001000;
#define REP(var, count) for(int var=0; var<count; var++)


int vert[100010];
int edge[500010][3];

int main(void) {
	int V, E, r;
	scanf("%d", &V);
	scanf("%d", &E);
	scanf("%d", &r);
	
	REP(v, V) { vert[v] = INF; }
	vert[r] = 0;
	
	REP(i, E) {
		scanf("%d", &edge[i][0]);
		scanf("%d", &edge[i][1]);
		scanf("%d", &edge[i][2]);
	}
	
	REP(v, V) {
		bool update = false;
		REP(i, E) {
			int s = edge[i][0];
			int t = edge[i][1];
			if ( vert[s] != INF && vert[t] > (vert[s]+edge[i][2]) ) {
				vert[t] = vert[s] + edge[i][2];
				update = true;
			}
		}
		if ( !update ) { break; }
	}
	
	REP(v, V) {
		if ( vert[v] == INF ) {
			cout << "INF" << endl;
		} else {
			cout << vert[v] << endl;
		}
	}

}