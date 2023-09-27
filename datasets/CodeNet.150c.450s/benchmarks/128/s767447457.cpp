#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

long long LCM(long long c,long long d){
	long long res=d;
	if(c%d!=0)res=LCM(d,c%d);
	return res;
}
int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    string str;
    cin>>str;
    int len=str.size();
    for(int i=0;i<len;++i){
    	cout<<str[len-i-1];
    }
    cout<<endl;
    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}