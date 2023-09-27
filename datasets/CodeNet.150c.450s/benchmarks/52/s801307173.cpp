#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())

int main(int argc, char const *argv[])
{
	stack<int> st;
	int i;
	while(scanf("%d", &i) != EOF)
	{
		if (i == 0)
		{
			printf("%d\n", st.top());
			st.pop();
		}
		else
		{
			st.push(i);
		}
	}
	return 0;
}