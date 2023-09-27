#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>


#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

const int INF=1<<28;

int main(){
	int h,w;

	while(1){

		cin >>h>>w;
		if(h==0 && w==0)break;

		int len=h*h+w*w;

		int min_h=151,min_w=151;

		for(int i=1;i<=150;i++){
			for(int j=1;j<i;j++){
				if((i*i+j*j>len) || (i*i+j*j==len&&j>h)){
					if(((i*i)+(j*j) < min_h*min_h+min_w*min_w) ||(i*i+j*j == min_h*min_h+min_w*min_w && j < min_h)){
						min_h=j;
						min_w=i;
					}
				}
			}
		}

		cout <<min_h<<" "<<min_w<<endl;

	}
	return 0;
}