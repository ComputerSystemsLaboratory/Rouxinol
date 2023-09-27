#include <iostream>
#include <string>

using namespace std;

char MCXI[] = "mcxi";

int mcxi2int(const char* str)
{
	int ret = 0;
	int idx = 0;
	for(int i = 0; i < 4; i++){
		if(str[idx] == MCXI[i])
			 ret++,idx++;
		else if(str[idx] >= '2' && str[idx] <= '9' && str[idx+1] == MCXI[i])
			ret += str[idx] - '0',idx += 2;
		ret *= 10;
	}

	return ret/10;
}

void int2mcxi(int num)
{
	int j = 1000;
	for(int i = 0; i < 4; i++,j /= 10){
		int x = (num / j) % 10;
		if(x == 0) continue;
		if(x != 1) cout << (char)('0' + x);
		cout << MCXI[i];
	}
	cout << endl;
}

void solve()
{
	string s1,s2;
	cin >> s1 >> s2;
	int2mcxi(mcxi2int(s1.c_str()) + mcxi2int(s2.c_str()));
}

int main()
{
	int m;
	cin >> m;
	for(int i=0;i<m;i++)
		solve();
	return 0;
}