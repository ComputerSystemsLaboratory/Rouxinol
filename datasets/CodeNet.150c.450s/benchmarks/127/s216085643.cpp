
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1142&lang=jp

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

string reverse_str(string train)
{	
	int n = train.size();
	rep(i,n/2)
	{
		swap(train[i],train[(n-1)-i]);
	}

	return train;
}

bool check(vector<string> &train_list, string train)
{
	bool flag=false;

	rep(i,train_list.size())
	{
		if(train_list[i]  == train){ flag=true; }
	}

	return flag;
}

void train_list_pop(vector<string> &train_list, string split1, string split2)
{
	string tmp = split1 + split2;
	if(!check(train_list, tmp)){ train_list.push_back(tmp); }

	tmp = split1 + reverse_str(split2);
	if(!check(train_list, tmp)){ train_list.push_back(tmp); }

	tmp = reverse_str(split1) + split2;
	if(!check(train_list, tmp)){ train_list.push_back(tmp); }

	tmp = reverse_str(split1) + reverse_str(split2);
	if(!check(train_list, tmp)){ train_list.push_back(tmp); }
}

int main() {
	int M;

	cin >> M;
	string train;
	vector<string> train_list;

	rep(i,M)
	{
		cin >> train;
		
		train_list.clear();
		int n = train.size();
		REP(j,1,n)
		{
			string split1 = train.substr(0,j);
			string split2 = train.substr(j);
		
			train_list_pop(train_list, split1, split2);
			train_list_pop(train_list, split2, split1);

		}
		cout << train_list.size() << endl;

	}
	return 0;
}