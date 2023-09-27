#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;


int main(){

    long long n;
    vector< vector<long long> > map(100,vector<long long>(100));
    long long a,b,c;
    vector<long long> v(100);
    fill(v.begin(),v.end(),1<<20);
    while(true){
	fill(map.begin(),map.end(),v);
	cin >> n;
	long long ma=0;
	if(n == 0) break;
	for(long long i=0;i<n;i++){
	    cin >> a >> b >> c;
	    map[a][b] = c;
	    map[b][a] = c;
	    ma = max(ma,b);
	}
	for(long long i=0;i<ma;i++){
	    map[i][i] = 0;
	}
	ma++;
	for(int l = 0;l<2;l++){
	for(long long i=0;i<ma;i++){
	    for(long long j=0;j<ma;j++){
		for(long long k=0;k<ma;k++){
			map[i][j] = min(map[i][j] ,map[i][k] + map[k][j] );
		}
	    }
	}
	}

	long long res = 1<<30,t=0;
	for(long long i=0;i<ma;i++){
	    a =0;
	    for(long long j=0;j<ma;j++){
		a += map[i][j];
	    }
	    if(a!=0 && res>a){
		res = a;
		t = i;
	    }
	}
	cout << t<<" " << res << endl;
    }
    
    return 0;
}