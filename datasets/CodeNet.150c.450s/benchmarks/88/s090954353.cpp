#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
using namespace std;


int main() {
	vector<pair< pair<int,int> , int> > v;
	for(int h=1;h<=150;h++){
		for(int w=1;w<150;w++){
			if(w>h){
				v.push_back( make_pair(make_pair(w*w+h*h,h),w)  );
				
			}
			
		}
	}
	sort(v.begin(),v.end());
	int h,w,t;
	while(cin>>h>>w && h){
	int i=0;
	while(v[i].first.second != h || v[i].second !=w) i++;
	cout<<v[i+1].first.second<<" "<<v[i+1].second<<endl;

	}
	
	
	return 0;
}