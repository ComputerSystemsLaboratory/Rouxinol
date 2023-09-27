#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>

#define ll long long int

using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int month,date;
  int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  int i;

  while(1){
    cin>>month>>date;
    if(month==0)break;
    int day=0;
    for(i=0;i<month-1;i++)
      day+=n[i];
    day+=date;

    switch(day%7){
    case 0:cout<<"Wednesday"<<endl;break;
    case 1:cout<<"Thursday"<<endl;break;
    case 2:cout<<"Friday"<<endl;break;
    case 3:cout<<"Saturday"<<endl;break;
    case 4:cout<<"Sunday"<<endl;break;
    case 5:cout<<"Monday"<<endl;break;
    case 6:cout<<"Tuesday"<<endl;break;
    }
  }
}