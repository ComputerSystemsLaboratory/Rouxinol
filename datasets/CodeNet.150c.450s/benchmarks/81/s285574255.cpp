#include<iostream>
#include<climits>
using namespace std;

int w[10][10];

int d[10][10];

int x[10];

int tw;

void erace(bool flag){
	for(int i=0; i<10; i++){
		if(flag){
			x[i] = 0;
			continue;
		}
		for(int j=0; j<10; j++)
				w[i][j] = INT_MAX;
	}
}

void copy(){
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			d[i][j] = w[i][j];
}

int min(){
	int tmp = x[0];
	int ans = 0;
	for(int i=1; i<tw; i++){
		if(tmp > x[i]){
			tmp = x[i];
			ans = i;
		}
	}
	return ans;
}

int solve(){
	copy();
	for(int k=0; k<tw; k++){
		for(int i=0; i<tw; i++){
			for(int j=0; j<tw; j++){
				if(d[i][k] >= INT_MAX || d[k][j] >= INT_MAX)
					continue;
				int dis = d[i][k] + d[k][j];
				if(dis < d[i][j])
					d[i][j] = dis;
			}
		}
	}
	erace(true);
	for(int i=0; i<tw; i++){
		for(int k=0; k<tw; k++){
			if(k == i)
				continue;
			x[i] += d[i][k];
		}
	}

	return min();
}

int main(){
	int n,a,b,c;
	while(true){
		tw = 0;
		erace(false);
		cin >> n;
		if(!n)
			return 0;
		for(int i=0; i<n; i++){
			cin >> a >> b >> c;
			w[a][b] = c;
			w[b][a] = c;
			if(tw < a+1)
				tw = a+1;
			if(tw < b+1)
				tw = b+1;
		}
		n = solve();
		cout << n << ' ' << x[n] << endl;
	}
}