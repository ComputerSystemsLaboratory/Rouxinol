#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct process{
  string name;
  int time;
};

int main(){

    int sum,quantam,sumtime=0;
    cin >> sum >> quantam;
    queue<process> q;
    while(!q.empty()){
      q.pop();
    }
    for(int i=0;i<sum;i++){
      process tmp;
      cin >> tmp.name >> tmp.time;
      q.push(tmp);
    }
    while(!q.empty()){
      process processing = q.front();
      q.pop();
      if(processing.time <= quantam){
        sumtime += processing.time;
        cout << processing.name << ' ' << sumtime << endl;
      }
      else{
        sumtime += quantam;
        processing.time -= quantam;
        q.push(processing);
      }
    }
    return 0;
}