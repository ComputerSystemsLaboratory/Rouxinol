#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
int main(void){
	int h[10];
	rep(i,10)cin>>h[i];
	sort(h,h+10);
	rep(i,3)cout<<h[10-i-1]<<endl;
}