#include<iostream>
#include<cstdio>

using namespace std;

int Month;
int Day;

char *data[] ={
 "Monday",
 "Tuesday",
 "Wednesday",
 "Thursday",
 "Friday",
 "Saturday",
 "Sunday"
};
int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int ans[12][31];
int d = 3;
int main()
{   
    for(int i = 0;i < 12;i++){
      for(int j = 0;j < days[i];j++){
	ans[i][j] = d%7;
	d++;
      }
    }
    while(cin >>Month>>Day){
      if(Month ==0)
	break;
    cout <<data[ans[Month-1][Day-1]]<<endl;
    }
  return 0;
}