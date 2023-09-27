#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

const int eMax = 1000000;

int main() {
  int e;
  while(cin>>e && e) {
    int ans = e;
    for(int z=0; z*z*z<=e; z++) {
      for(int y=0; y*y+z*z*z<=e; y++) {
	int x = e-y*y-z*z*z;
	if(x+y+z < ans) {
	  ans = x+y+z;
	}
      }
    }
    /*
    int ans = INT_MAX;
    bool flag = false;
    for(int x=0; x<e; x++) {
      for(int y=0; y<=sqrt(e) && x+y*y<=e; y++) {
	int yy = y*y;
	for(int z=0; z<=pow(e,0.333)+1 && x+yy+z*z*z<=e; z++) {
	  int zzz = z*z*z;
	  if(x+yy+zzz==e && x+y+z<ans) {
	    ans = x+y+z;
	  }
	  if(flag == true) break;
	}
	if(flag == true) break;
      }
      if(flag == true) break;
    }
    */
    cout<<ans<<endl;
  }
}