#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>

typedef long long ll;
using namespace std;

typedef pair<int,int> P;

map<string,int> freq;

int main()
{
	char buf[64];
	while(~scanf("%s",buf)){
		string tmp = buf;
		freq[tmp]++;
	}

	int msize=0;
	string msize_str;
	int mfreq=0;
	string mfreq_str;
	for(map<string,int>::iterator it = freq.begin(); it != freq.end(); it++){
		if(msize < it->first.size()){
			msize_str = it->first;
			msize = it->first.size();
		}

		if(mfreq < it->second){
			mfreq_str = it->first;
			mfreq = it->second;
		}	
	}

	cout << mfreq_str << " " << msize_str << endl;
}