#include <iostream>
using namespace std;

int main(){
       int w, h, x, y, r;
       cin>>w>>h>>x>>y>>r;

       if((x-r<0 || w<x+r) || (y-r<0 || h<y+r)){
	      cout<<"No\n";
       }else{
	      cout<<"Yes\n";
	      }

	      return 0;
}