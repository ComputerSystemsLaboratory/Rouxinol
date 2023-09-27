//??\???
//pi???????????????????????????m???0??§?¶??????????

#include <stdio.h>
#include <iostream>
#include <queue>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#define PB push_back
#define in scanf
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
using	namespace std;
int dis,t1,t2,k,n,N,M;
void solve(){
while(cin >> N>>M,N!=0){
	vector <pair<int,int> > data;//first = Expected value second = distance
REP(l,N){
	cin >> t1 >> t2 ;
	data.push_back(make_pair(t2,t1));

}
//sort(data.begin(),data.end(),greater<int>());
sort(data.begin(),data.end());
int h=data.size()-1;
while(M>0){
	if(data[h].second<=M){
		M-=data[h].second;
		data[h].first=0;
	}else{
		data[h].second -= M;
M=0;
	}
	h--;
	if(h<0)break;
}
//TESTOUTPUT REP(i,data.size()) cout << "("<<data[i].first<<','<<data[i].second<<')'<<endl;
int res=0;
REP(i,N)res+= data[i].first*data[i].second;
cout << res <<endl;
}
}



	
int main(){
	solve();

}