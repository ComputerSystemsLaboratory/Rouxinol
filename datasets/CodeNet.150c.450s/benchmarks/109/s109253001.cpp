#include <bits/stdc++.h>
using namespace std;

struct Time {
  string time;
  int type; // 0 departure, 1 arrival

  /* Time(string _time, int _type){
     time = _time;
     type = _type;
     }*/

};

bool cmp(const Time &a, const Time &b){

  if(a.time == b.time)
    return b.type < a.type;
  else
    return a.time < b.time;

}

int main(){

  int n;

  while(cin>>n&&n){

    vector<Time> times(2*n);

    for(int i=0;i<2*n;++i){

      cin>>times[i].time;
      if(i%2==0)
        times[i].type = 0;
      else
        times[i].type = 1;

 //     cout<<times[i].time<<" "<<times[i].type<<endl;

    }

    sort(times.begin(), times.end(), cmp);
 /*   for(int i=0;i<2*n;++i){

      cout<<times[i].time<<" "<<times[i].type<<endl;

    }*/

    int cnt = 0, _max = 0;

    for(int i=0;i<2*n;++i){

      if(times[i].type == 0){
        ++cnt;
      }
      else{
        --cnt;
      }

      _max = max(_max, cnt);
    }

    cout<<_max<<endl;

  }

  return EXIT_SUCCESS;
}