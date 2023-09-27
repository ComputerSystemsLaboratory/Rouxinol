#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;

typedef pair<string,int> mypair;

int main(void){
vector< mypair> vvc(1,mypair("",0));
string wst, qst="", mst;

	while(cin >> wst){
		if(wst.size() > qst.size()) qst = wst;
		int sszz=vvc.size();
		bool addsw = true;
		rep(i,sszz){
			if(wst == vvc[i].first){
				vvc[i].second++;
				addsw=false;
				break;
			}
		}
		if(addsw) vvc.push_back(mypair(wst,1));
	}
	int mx = -999, sszz = vvc.size();
//	rep(i,sszz) cout << i << ": " << vvc[i].first << "- " << vvc[i].second << endl;
	rep(i,sszz){
		if(mx < vvc[i].second){
			mx = vvc[i].second;
			mst = vvc[i].first;
		}
	}
	cout <<  mst << " " << qst << endl;
	return 0;
}