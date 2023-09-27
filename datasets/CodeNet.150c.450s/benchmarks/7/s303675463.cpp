#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    int H[10];
    for(int i=0;i<10;++i){
    	cin>>H[i];
    }
    sort(H,H+10);
    for(int i=0;i<3;++i){
    	    cout<<H[9-i]<<endl;
    }

    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}