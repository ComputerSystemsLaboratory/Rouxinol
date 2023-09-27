
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2006

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

string table[10] = { "#", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main() 
{
	int N;
	cin >> N;
	rep(nth,N)
	{
		int count=0;
		string msg;
		cin >> msg;
		rep(i,msg.length())
		{
			if(msg[i] == msg[i+1]){
			count++;
			}else{
				string tmp = table[(msg[i]-'0')];
				char word = tmp[ count % (tmp.length()) ];
				if(word != '#'){ cout << word; }
				count=0;
			}
		}
		cout << endl;
	}
	return 0;
}