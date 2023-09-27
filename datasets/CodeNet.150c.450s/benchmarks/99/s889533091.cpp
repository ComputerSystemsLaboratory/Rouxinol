#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#include<sstream> //stringstream(from int to string)
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl

template<class T> void chmin(T &t, T f) { if (t > f) t = f; } //t=min
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } //t=max

using namespace std;

char tanni[4] = {'i','x','c','m'};
int tanni_num[4] = {1,10,100,1000};

int get_number(string mcxi) {
	int total_num=0;
	int back_num = -1;
	int tanni_index = -1;

	rep(i,mcxi.size()) {
		tanni_index = -1;
		rep(j,4) { //単位があるか
			if (mcxi[i] == tanni[j]) {tanni_index = j; break;}
		}
		if (tanni_index == -1) { //number[2-9]
			back_num = mcxi[i]- '0';
		}
		else { //char[mcxi]
			if (back_num == -1) { //back_numがないとき
				total_num += tanni_num[tanni_index];
			}
			else {
				total_num += back_num * tanni_num[tanni_index];
			}
			back_num = -1;
		}
	}
	
	return total_num;
}

string get_mcxi(int num) {
	string mcxi="";
	int ii=0;
	stringstream ss;
	ss << num;
	string num_str = ss.str();

	for(int i = num_str.size()-1; i >= 0; i--)
	{
		if (num_str[i] == '1') {
			mcxi.insert(mcxi.begin(),tanni[ii]);
		}
		else if (num_str[i] == '0') { 
			//pass
		}
		else {
			mcxi.insert(mcxi.begin(),tanni[ii]);
			mcxi.insert(mcxi.begin(),num_str[i]);
		}
		ii++;
	}
	return mcxi;
}


int main() {
	int N;
	string left_str,right_str;
	int left_num,right_num;
	int sum_num;

	cin >> N;
	rep(n,N) {
		cin >> left_str >> right_str;
		left_num = get_number(left_str);
		right_num = get_number(right_str);
		sum_num = left_num + right_num;
		//cout << sum_num << " ";
		cout << get_mcxi(sum_num) << endl;
	}

	return 0;
}