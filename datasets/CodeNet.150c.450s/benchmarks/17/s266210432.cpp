#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <complex>

using namespace std;

const double PI=3.14159265;

int main()
{
	int v[5];

	srand((unsigned)time(NULL));

	for(int i=0;i<5;i++) cin>>v[i];

	do{
		for(int i=0;i<5;i++) swap(v[i],v[rand()%5]);

	}while(!( (v[0]>=v[1])&&(v[1]>=v[2])&&(v[2]>=v[3])&&(v[3]>=v[4]) ));

	for(int i=0;i<4;i++) cout<<v[i]<<" ";
	cout<<v[4]<<endl;

	return 0;
}