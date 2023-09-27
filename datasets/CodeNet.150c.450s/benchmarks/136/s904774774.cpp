#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;

long long LCM(long long c,long long d){
	long long res=d;
	if(c%d!=0)res=LCM(d,c%d);
	return res;
}
int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    long long a,b;
    long long lcm;
    while(cin>>a>>b){
    	lcm =LCM(a,b);
       	cout << lcm<<" "<<(a*b/lcm)<<endl;;
    }

    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}