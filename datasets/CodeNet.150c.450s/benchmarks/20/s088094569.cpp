#include<iostream>
using namespace std;
class Watch{
public:
  void cal(int time){
    int h,m,s;
    h=time/3600;
    time=time%3600;
    m=time/60;
    time=time%60;
    s=time;
    cout<<h<<":"<<m<<":"<<s<<endl;
  }
};
int main(){
  int time;
  cin>>time;
  Watch watch;
  watch.cal(time);
  return 0;
}