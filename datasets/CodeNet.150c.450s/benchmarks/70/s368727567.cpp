#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int day_month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
char day[10][10]={
  {"Thursday"},
  {"Friday"},
  {"Saturday"},
  {"Sunday"},
  {"Monday"},
  {"Tuesday"},
  {"Wednesday"},
};
int main(){
  int m,d,count;
  while(1){
    cin >> m >> d;
    if(!m && !d)break;
    count = -1;
    for(int i=1;i<=m;i++){
      if(i == m){
	for(int j=1;j<=d;j++){
	  count++;
	}
      }else {
	for(int j=1;j<=day_month[i];j++){
	  count++;
	}
      }
    }
    cout << day[count % 7] << endl;
  }
}