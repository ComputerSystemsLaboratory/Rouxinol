#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);i<(y);i++)

int main()
{
  while(true){
    int n;
    cin>>n;
    if(n==0){
      break;
    }

    string str1;
    string str2;
    vector<int> start,end;
    int sh,sm,ss,eh,em,es;
    rep(i,0,n){
      cin>>str1>>str2;
      sh=stoi(str1.substr(0,2));
      sm=stoi(str1.substr(3,2));
      ss=stoi(str1.substr(6,2));
      eh=stoi(str2.substr(0,2));
      em=stoi(str2.substr(3,2));
      es=stoi(str2.substr(6,2));
      start.emplace_back(sh*3600+sm*60+ss);
      end.emplace_back(eh*3600+em*60+es);
    }

    for(int i=n-1;i>=0;i--){
      for(int j=0;j<i;j++){
        if(start[j]>start[j+1]){
          swap(start[j],start[j+1]);
          swap(end[j],end[j+1]);
        }
      }
    }

    vector<int> trains;
    int t=0;
    trains.push_back(t);

    rep(i,0,n){
      bool flag=false;
      int size=trains.size();
      rep(j,0,size){
        if(trains[j]<=start[i]){
          trains[j]=end[i];
          flag=true;
          break;
        }
      }
      if(flag==false){
        t=end[i];
        trains.push_back(t);
      }
    }

    cout<<trains.size()<<endl;
  }

  return 0;
}