/**
 * 2016/8/14
 * AOJ 0033 ball
 */
#include <iostream>
#include <fstream>
using namespace std;
int n;
int Map[10];
bool solve(int begin,int left,int right){
	if (begin==10)return true;
	if(Map[begin]<left && Map[begin]<right)
		return false;
	if(Map[begin]>left && Map[begin]>right)
		return solve(begin+1,left,Map[begin]) || solve(begin+1,Map[begin],right);
	if(Map[begin]<left)
		return solve(begin+1,left,Map[begin]);
	if(Map[begin]<right)
		return solve(begin+1,Map[begin],right);
}
int main(){
	cin>>n;
	while(n--){
		//reader
		for(int i=0;i<10;++i)cin>>Map[i];
		//solver
		if(solve(0,0,0))cout<<"YES\n";
		else cout<<"NO\n";
	}
}