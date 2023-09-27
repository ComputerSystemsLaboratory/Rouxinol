#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;
// English Sentence (0029)
int main()
{
	map<string,int>a;
	string ret1,ret2;
	int maxnum=0,maxlen=0;
	string s;
	while (1){
		if(!(cin>>s)) break;;
		int num=++a[s];
		if(maxnum<num){ 
			maxnum=num;
			ret1=s;
		}
		if(maxlen < s.size()){
			maxlen=s.size();
			ret2=s;
		}
	}
	cout<<ret1<<" "<<ret2<<endl;
	return 0;
}