#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N (100005)
int n, m;
vector<int> G[MAX_N];
int Group[MAX_N];

int main()
{
    int id = 0;

    scanf("%d %d", &n, &m);
    
    for ( int i = 0; i < m; i++ ) {
	int s, t;
	scanf("%d %d", &s, &t);
	G[s].push_back(t);
	G[t].push_back(s);
    }

    for ( int i = 0; i < n; i++ ) {
	if ( Group[i] == 0 ) {
	    id++;
	    queue<int> q;
	    q.push(i);
	    Group[i] = id;
	    while ( !q.empty() ) {
		int cur = q.front(); q.pop();
		for ( int j = 0; j < G[cur].size(); j++ ) {
		    int fri = G[cur][j];
		    if ( Group[fri] == 0 ) {
			Group[fri] = id;
			q.push(fri);
		    }
		}
	    }
	}
    }

    int q;
    scanf("%d", &q);

    for ( int i = 0; i < q; i++ ) {
	int s, t;
	scanf("%d %d", &s, &t);
	if ( Group[s] == Group[t] ) {
	    printf("yes\n");
	}
	else {
	    printf("no\n");
	}
    }

    return 0;
}