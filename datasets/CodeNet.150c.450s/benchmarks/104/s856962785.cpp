#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
    int W,N;
	cin >> W >> N;

	vector<int> ret(W);
    iota(begin(ret),end(ret),1);

    REP(i, N){
    	int a,b;
    	string str;
    	getline(cin,str,',');
    	a = stoi(str);

    	getline(cin,str,'\n');
    	b = stoi(str);

    	int buf = ret[a-1];
    	ret[a-1] = ret[b-1];
    	ret[b-1] = buf;
    }
    REP(i, W) cout << ret[i] << endl;
    return 0;
}