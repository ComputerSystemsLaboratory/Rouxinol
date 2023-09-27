
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
int n;
int S[100];
int s =0;
int main()
{
 	string str;
 	getline(cin, str);
 	stringstream ss(str);
 	char val[8];
 	while(!ss.eof())
	 {
	 	ss >> val;
		switch(val[0])
		{
		case '+': --s; S[s-1] += S[s]; break;
		case '-': --s; S[s-1] -= S[s]; break;
		case '*': --s; S[s-1] *= S[s]; break;
		default: S[s++] = atoi(val);
		}
	}
	cout << S[s-1] << endl;
	return 0;
}