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
	int dat[11]={};
	for(int i=0;i<10;i++){
		cin>>dat[i];
	}
	sort(dat,dat+10,greater<int>());
	cout<<dat[0]<<endl<<dat[1]<<endl<<dat[2]<<endl;
	return 0;
}