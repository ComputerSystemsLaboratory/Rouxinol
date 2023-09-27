#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <string.h>

using namespace std;

int main(){
  
  int n; cin>>n; int taro=0,hanako=0;
   
  for(int i=0; i<n; i++){
    string s,t; cin>>s>>t;
    if(s>t) taro+=3;
    else if(s<t) hanako+=3;
    else {
      taro++; hanako++;
      }
    }

   cout<<taro<<' '<<hanako<<endl;

}