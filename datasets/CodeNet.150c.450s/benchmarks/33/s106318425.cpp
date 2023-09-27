#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main(void)
{
	 int x, y, s;
	 while(cin >> x >> y >> s && x != 0 && y != 0 && s != 0){
	 	int max_s = 0;
	 	for (int i = 1; i < s - 2; ++i)
	 	{
	 		for (int j = s - i; j >= i; --j)
	 		{
	 			if(i * (100 + x) / 100 + j * (100 + x) / 100 == s){
	 				max_s = max(max_s, i * (100 + y) / 100 + j * (100 + y) / 100);
	 			}
	 		}
	 	}
	 	cout << max_s << endl;
	 }
}