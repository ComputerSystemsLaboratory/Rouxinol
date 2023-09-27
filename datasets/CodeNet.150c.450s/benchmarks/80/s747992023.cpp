#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <vector>
#include <queue>
#include <functional>
#include <cstdio>

using std::endl;

#define ll long long int
#define FOR(a, s, n) for(int a = s; a < n; ++a)
#define LEP(a, n) for(int a = 0; a < n; ++a)
#define INF 1145141919810
#define MOD 1000000007
#define OUT std::cout
#define IN std::cin
#define itn int
#define fro for
#define sdt std
#define asn ans

int A, B, buf;

int main()
{
	LEP(a, 4)
	{
		IN >> buf;
		A += buf;
	}
	LEP(a, 4)
	{
		IN >> buf;
		B += buf;
	}

	OUT << std::max(A, B) << endl;
	
	return 0;
}