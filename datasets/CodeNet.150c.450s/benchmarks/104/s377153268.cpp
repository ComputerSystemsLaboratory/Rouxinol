#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)
#define all(i) i.begin(),i.end()
#define INF 1000000000


using namespace std;


/**/
VI y;
pair<int,int> x[31];


int main(){
	int w,n;
	rep(i,31){
		y.push_back(i);
	}
	cin>>w>>n;
	rep(i,n){
		char c;
		cin>>x[i].first>>c>>x[i].second;
		x[i].first--,x[i].second--;
	}
	rep(i,n){
		swap(y[ x[i].first ],y[ x[i].second ]);
	}
	rep(i,w){
		cout<<y[i]+1<<endl;
	}

	return 0;
}