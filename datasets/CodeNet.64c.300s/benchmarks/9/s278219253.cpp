#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    long long total=100000;
    int N;
    cin>>N;
    for(int i=0;i<N;++i){
    	total=total*1.05;
    	if(total%1000>0)total=(total/1000+1)*1000;
    }
    cout<<total<<endl;
    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}