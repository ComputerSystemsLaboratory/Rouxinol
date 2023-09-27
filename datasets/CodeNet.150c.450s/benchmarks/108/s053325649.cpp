#include <bits/stdc++.h>
using namespace std;
const int N = 101;
const int CRL = -1;
int adj[N][N] = {0};
int d[N]={0};
int kai[N];

int main()
{
    int n;
    memset(d, CRL, sizeof(d));
    d[1]=0;
    queue <int> q;
    q.push(1);
    cin >> n;
    for(int i=1;i<=n;i++){
    	int k;
    	int l;
    	cin >> l >> k;
    	kai[i]=l;
    	for(int j=1;j<k+1;j++){
    		int m;
    		cin >> m;
    		adj[i][j] = m;
    	}
    }
    while(q.size()){
    	int k = q.front();
    	q.pop();
    	for(int i=1;i<kai[i]+1;i++){
    		if(d[adj[k][i]]==CRL){
    			d[adj[k][i]] = d[k]+1;
    			q.push(adj[k][i]);
    		}
    	}
    }
    for(int i=2;i<N;i++)
    	if(d[i]==0)d[i]=-1;
    for(int i=1;i<=n;i++){
    	cout << i << " " << d[i] << endl;
    }
    return 0;
}