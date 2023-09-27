#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		int dat[4];
		cin>>dat[0]>>dat[1]>>dat[2];
		for(int i=0;i<3;i++){
			if(dat[i]*dat[i]==dat[0]*dat[0]+dat[1]*dat[1]+dat[2]*dat[2]-dat[i]*dat[i]){
				cout<<"YES"<<endl;
				i=4;
			}
			if(i==2){
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}