/****************************************************************************************
   *  Md. Abdulla Al Mamun (Nayon)
   *  ID: 1306001
   *  Session: 2013-2014
   *  Department of Computer Science and Engineering
   *  Begum Rokeya University, Rangpur (BRUR)
   *
   *  Project Name:			factorial n
   *  File Created:			Monday, 2015-10-26-22.20.20
   *  Current File:			D:\My Codes\C and C++\Code-Blocks Projects\factorial n\main.cpp
   *  Language:				English (U.S.)
   *  Encoding:				windows-1252
*****************************************************************************************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <ios>
#include <set>
#include <map>

using namespace std;

#define PI acos(-1.0)
#define EPS 1e-9
#define INF 1 << 28
#define all(x) (x).begin(), (x).end()
#define pb() push_back()
#define ppb pop_back
#define mp(a, b) make_pair(a, b)
#define endl '\n'
#define MAX 100000

typedef pair<int, int> pii;

//#define isValid(a, b) ((a >= 0 && a < b) ? 1 : 0)
//int dr[]  =  {0, -1, -1, -1,  0,  1, 1, 1};
//int dc[]  =  {1,  1,  0, -1, -1, -1, 0, 1};

int main()
{
	//freopen("in.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    unsigned long long fact = 1, n;
    cin >> n;
    if(n == 0)
        cout << 1 << endl;
    else{
        for(unsigned long long i = 1; i <= n; i++)
            fact *= i;
        cout << fact << endl;
    }
	return 0;
}