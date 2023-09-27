
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1180&lang=jp

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

int calc(vector<int> &num);
vector<int> sub(vector<int> &max_num, vector<int> &min_num);
vector<int> convert_to_vector(int value, int L);

int calc(vector<int> &num)
{
	int digit=1, total=0;
	for(int i=num.size()-1; i>=0; --i)
	{
		total += num[i] * digit;
		digit *= 10;
	}

	return total;
}

vector<int> sub(vector<int> &max_num, vector<int> &min_num)
{
	int value = calc(max_num) - calc(min_num);
	
	return convert_to_vector(value, max_num.size());
}

vector<int> convert_to_vector(int num, int L)
{
	vector<int> value(L,0);
	
	rep(i,L)
	{
		int tmp = num % 10;
		num = num / 10;
		value[i] = tmp;
	}
	
	reverse(ALL(value));

	return value;
}

int main()
{
	int a0,L;

	while(cin >> a0 >> L)
	{
		if(a0 == 0 && L == 0){ break; }
		
		
		vector<int> value = convert_to_vector(a0,L);

		vector<int> table(21,0);
		table[0] = calc(value);
		
		REP(i,1,21)
		{
			vector<int> max_num = value;
			vector<int> min_num = value;

			sort(ALL(min_num));
			sort(max_num.rbegin(), max_num.rend());

			value = sub(max_num, min_num);
			table[i] = calc(value);
		}

		pair<int,int> i_j;
		int ans;

		rep(j,21){
			REP(i,j+1,21)
			{
					if(table[i] == table[j])
					{
						i_j=make_pair(j,i-j);
						ans = table[i];
						goto end;
					}
			}
		}
end:
		cout << i_j.first << " " << ans << " " << i_j.second << endl;
	}
	return 0;
}