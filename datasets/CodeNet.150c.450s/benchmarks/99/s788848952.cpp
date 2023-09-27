
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1137&lang=jp

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

int convert_to_digit(string mcxi)
{
	int num=0;

	int k=1;
	rep(i, mcxi.length())
	{
		if(isdigit(mcxi[i])){
			k = mcxi[i] - '0';
		}
		else if(mcxi[i] == 'm'){
			num += k*1000; k=1;
		}
		else if(mcxi[i] == 'c'){
			num += k*100; k=1;
		}
		else if(mcxi[i] == 'x'){
			num += k*10; k=1;
		}
		else if(mcxi[i] == 'i'){
			num += k*1; k=1;
		}
	}
	return num;
}

string convert_to_mcxi(int value)
{
	string word[4] = {"i","x", "c", "m"};
	string mcxi("");
	int tmp;
	rep(i,4)
	{
		tmp = value % 10;
		
		if(tmp == 0){
			//Do Nothing...
		}
		else if(tmp == 1)
		{
			mcxi = word[i] + mcxi;
		}else
		{
			mcxi = to_string(tmp) + word[i] + mcxi;
		}

		value = value / 10;
	}

	return mcxi;
}

int main() {

	int N;

	cin >> N;

	rep(i,N)
	{
		string in1, in2;
		cin >> in1 >> in2;

		int out1 = convert_to_digit(in1);
		int out2 = convert_to_digit(in2);	

		string mcxi = convert_to_mcxi(out1+out2);
		cout << mcxi << endl;

	}
	return 0;
}