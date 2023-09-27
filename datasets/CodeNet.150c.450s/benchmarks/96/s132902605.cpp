#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	

using namespace std;

namespace MyLib {
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long
}

using namespace MyLib;


int main() {
	string r;
	int n;
	cin >> n;
	REP(x,n){
		cin >> r;
		string s = "";
		int co = 0;
		string buf = "";
		int num = 0;
		REP(i, r.size())
			if (r[i] == '0') {
				if (num == 0)
					continue;
				if (num == 1)
					if (co % 5 == 1)
						buf = ".";
					else if (co % 5 == 2)
						buf = ",";
					else if (co % 5 == 3)
						buf = "!";
					else if (co % 5 == 4)
						buf = "?";
					else
						buf = ' ';
				else if (2 <= num&& num<= 6)
					buf = 'a' + (num - 2) * 3 + (co + 2) % 3;
				else if (num == 7)
					buf = 'p' + (co + 3) % 4;
				else if (num == 8) 
					buf = 't' + (co + 2) % 3;
				else {
					buf = 'w' + (co + 3) % 4;
				}
				s = s + buf;
				co = 0;
				num = 0;

			}
			else {
				num = (r[i] - '0');
				co++;
			}
			cout << s << endl;
	}

	return 0;

}