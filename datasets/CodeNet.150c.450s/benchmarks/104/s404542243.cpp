/*
C++ ???????????????????????????????????¬??????
??????AOJ-ITP1??????????????????
*/
#define _USE_MATH_DEFINES

#include <iostream> // ?¨??????\??????
#include <fstream>  // ??????????????\??????
#include <string>   // ???????????¢???
#include <vector>   // ???????????????
#include <cmath>    // ??°??????
#include <iomanip>  // stream???????????¢???
#include <algorithm>// max??¢??°??????

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;        // ????´???°????????????????????????
using std::fixed;         // ???????????????????¨???????????????????????????????
using std::setprecision;  // ?????°????°???°?????\???????????°????????????????????¨????????\???

void out1(vector<int> a) {
	for (size_t i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int w, n;
	cin >> w;	// ???????????°
	cin >> n;	// ?¨?????????°
	vector<int> begin(n);
	vector<int> end(n);
	vector<int> location(w);
	int num1 = 0;
	int num2 = 0;

	// ??\???
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d,%d", &begin[i], &end[i]);
	}

	// location????????????
	for (size_t i = 0; i < w; i++)
	{
		location[i] = i + 1;
		
	}
	
	// ????????\??¬????????§????????????
	for (size_t i = 0; i < w; i++)
	{
		vector<int> tmp(w,0);
		//out1(tmp);
		tmp[i] = location[i];
		//cout << "----i = " << i << "?????¨???----" << endl;
		for (size_t j = 0; j < n; j++)
		{
			if (begin[j] == location[i])
			{
				
				//cout << begin[j] << "???" << end[j] << "?????\???????????????" << endl;
				location[i] = end[j];
			}
			else if (end[j] == location[i])
			{
				//cout << end[j] << "???" << begin[j] << "?????\???????????????" << endl;
				location[i] = begin[j];
			}
			//out1(location);
		}
	}
	// ???????????????
	vector<int> output(w,0);
	for (size_t i = 0; i < w; i++)
	{
		output[location[i]-1] = i;
	}

	// ???????????¨???????????????????????°??????1????¶????
	for (size_t i = 0; i < w; i++)
	{
		cout << output[i]+1 << endl;
	}


	return 0;
}