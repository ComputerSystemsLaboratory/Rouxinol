#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    int H[3];
    int N,total;
    cin>>N;
    for(int i=0;i<N;++i){
    	cin>>H[0]>>H[1]>>H[2];
    	sort(H,H+3);
    	total=H[2]*H[2]-(H[1]*H[1]+H[0]*H[0]);
    	if(total==0){
    		cout<<"YES"<<endl;
    	}else{
    		cout<<"NO"<<endl;

    	}
    }

    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}