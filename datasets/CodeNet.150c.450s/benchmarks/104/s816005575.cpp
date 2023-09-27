#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <limits>
#include <chrono>

using namespace std;

class amida
{
	int w;
	vector<int> va;
public:
	amida(int _w) : w(_w){
		for(int i = 0; i < w; i++){
			va.push_back(i);
		}
	}
	void swap(int, int);
	void output();
};

void amida::swap(int a1, int b1)
{
	int temp = va[a1-1];
	va[a1-1] = va[b1-1];
	va[b1-1] = temp;
}

void amida::output()
{
	for(int i = 0; i < w; i++)
		cout << va[i]+1 << '\n';
}

int main()
{
	int w, n;
	int a1, b1;
	cin >> w;
	amida am(w);
	cin >> n;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		const char* chtemp = str.c_str();
		a1 = atoi(strtok((char*)chtemp, ","));
		b1 = atoi(strtok(NULL, ","));
		am.swap(a1, b1);
	}
	am.output();

	return 0;
}