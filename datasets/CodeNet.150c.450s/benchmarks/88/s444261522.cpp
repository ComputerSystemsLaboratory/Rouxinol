#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>
 
using namespace std;
  
const double eps=1e-10;
 
const int dy[]={-1,-1,0,1,1, 1, 0,-1};
const int dx[]={ 0, 1,1,1,0,-1,-1,-1};

class rect{
public:
	int h,w,d2;
	rect(int _h,int _w){h=_h; w=_w; d2=h*h+w*w;}
	bool operator<(const rect& r) const{
		return d2<r.d2 || d2==r.d2 && h<r.h;
	}

};

int main()
{

	vector< rect > vr;
	for(int h=1;h<=150;h++){
		for(int w=h+1;w<=150;w++) vr.push_back(rect(h,w));
	}
	sort(vr.begin(),vr.end());

	int h,w;
	while(cin>>h>>w,h){

		rect r(h,w);
		for(int i=0;i<vr.size();i++){
			if(r<vr[i]){
				cout<<vr[i].h<<" "<<vr[i].w<<endl;
				break;
			}
		}

	}
 
 
	return 0;
}