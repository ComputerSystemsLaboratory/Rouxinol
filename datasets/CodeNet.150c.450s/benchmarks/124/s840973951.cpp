#include <bits/stdc++.h>



using namespace std;



static const int INF = 999999;



int main(){

	int n,array[100][100];



	for(int i=0; i<100; i++){

		for(int j=0; j<100; j++){

			if(i==j) array[i][j]=0;

			else array[i][j]=INF;

		}

	}

	

	cin>>n;



	for(int i=0; i<n; i++){

		int u,k;

		cin>>u>>k;

		for(int j=0; j<k; j++){

			int t,c;

			cin>>t>>c;

			array[u][t]=c;

		}

	}



	int d[100];

	fill(d,d+n,INF);

	d[0]=0;

	bool flag[100]={};



	while(1){

		int u=-1,infn=INF;

		for(int i=0; i<n; i++){

			if(!flag[i] && d[i]<=infn){

				u = i;

				infn = d[u];

			}

		}

		if(u==-1) break;

		flag[u] = true;



		for(int i=0; i<n; i++){

			if(array[u][i]!=INF && !flag[i]){

				d[i] = min(d[i],d[u]+array[u][i]);

			}

		}

	}



	for(int i=0; i<n; i++){

		cout<<i<<" "<<d[i]<<endl;

	}



	return 0;

}