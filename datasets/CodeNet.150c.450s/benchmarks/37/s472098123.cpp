#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;

int main() {
    clock_t cTimeStart, cTimeEnd;
    cTimeStart = clock();           // 現在時刻
    float a,b,c,d,e,f ;
    float x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
    	x=(f*b-e*c)/(b*d-e*a);
       	y=(f*a-d*c)/(e*a-b*d);
       	if(x>-0.001&&x<=0)x=0.0;
       	if(y>-0.001&&y<=0)y=0.0;

       	printf("%.3f %.3f\n",x,y);
    }

    cTimeEnd = clock();           // 現在時刻
//    cout<< "処理時間:" <<(cTimeEnd - cTimeStart)/1000 << "[ms]" << endl;

	return 0;
}