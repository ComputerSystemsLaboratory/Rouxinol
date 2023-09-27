#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int m,d;
  while(cin>>m>>d,m+d){
    int day = 0;
    m--;
    // 2 , 4 , 6 , 9 . 11 
    int month[12] = {31,29,31,30,31,30,
		     31,31,30,31,30,31};
    rep(i,m){
      day+=month[i];
    }
    day=(day + d + 7 - 1)%7;
    switch(day){
    case 0:
      cout<<"Thursday"<<endl;
      break;
    case 1:
      cout<<"Friday"<<endl;
      break;
    case 2:
      cout<<"Saturday"<<endl;
      break;
    case 3:
      cout<<"Sunday"<<endl;
      break;
    case 4:
      cout<<"Monday"<<endl;
      break;
    case 5:
      cout<<"Tuesday"<<endl;
      break;
    case 6:
      cout<<"Wednesday"<<endl;
      break;
    }
    

  }
}