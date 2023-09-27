#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

int ss[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int day[13][32];

void cday(int m,int d,int dd){
	if(m==13)return;
	if(dd==8)dd=1;
	if(ss[m]==d-1)m++,d=1;
	day[m][d]=dd;
	cday(m,d+1,dd+1);
}

int main(void){
	cday(1,1,4);
	int a,b;
	while(1){
		cin >> a >> b;
		if(a==0)break;
		if(day[a][b]==1)cout << "Monday" << endl;
		if(day[a][b]==2)cout << "Tuesday" << endl;
		if(day[a][b]==3)cout << "Wednesday" << endl;
		if(day[a][b]==4)cout << "Thursday" << endl;
		if(day[a][b]==5)cout << "Friday" << endl;
		if(day[a][b]==6)cout << "Saturday" << endl;
		if(day[a][b]==7)cout << "Sunday" << endl;
	}
	return 0;
}