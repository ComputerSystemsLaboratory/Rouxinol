// AOJ 1180

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int toInt(string s){int v;istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

string mold(string str, int l)
{
	int tmp = l - str.length();
	for (int i = 0; i < tmp; i++){
		str += '0';
	}

	return str;
}
int main(void)
{
	int a, l;
	while (cin >> a >> l, a || l){
		vector <string> data;
		string tmp = toString(a); tmp = mold(tmp, l);
		data.push_back(tmp);
		while (1){
			string d = toString(a);
			d = mold(d, l);

			string high = d;
			sort(high.rbegin(), high.rend());
			string low = d;
			sort(low.begin(), low.end());

			int h = toInt(high), l = toInt(low);
			string tmp = toString(h - l);
			data.push_back(tmp);
			for (int i = 0; i < data.size()-1; i++){
				if (data[i] == tmp){
					cout << i << " " << tmp << " " << data.size()-1-i << endl;
					goto END;
				}
			}
			a = toInt(tmp);
		}
		END : ;
	}

	return 0;

}