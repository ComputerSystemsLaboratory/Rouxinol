
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2440

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int output(int isLock, string id, vector<string> id_list)
{
	bool flag=false;

	rep(i,id_list.size()){
		if(id_list[i] == id){flag=true;}
	}

	if(flag){
		if(isLock < 0){
			cout << "Opened by " << id << endl;
			return isLock*-1;
		}else{
			cout << "Closed by " << id << endl;
			return isLock*-1;
		}
	}else{
		cout << "Unknown " << id << endl;
		return isLock;
	}

}

int main() {
	
	int N,M;
	int isLock=-1;
	vector<string> id_list;

	cin >> N;
	string id;
	rep(i,N){
		cin >> id;
		id_list.push_back(id);
	}

	cin >> M;
	rep(i,M){
		cin >> id;
		isLock = output(isLock, id, id_list);
	}
	return 0;
}