#include<iostream>
#include<queue>
using namespace std;
int main(){
  
  queue<string> name;
  queue<int>time;
  string name_in;
  int n,q,time_in,time_tmp,currenttime=0;
  
  cin >>n>>q;
  
  for(int i=0 ; i < n ; i++){
    cin >>name_in>>time_in;
    name.push(name_in);  
    time.push(time_in);
  }
  
  while(!(time.empty())){
    time_tmp=time.front();
    if(time_tmp - q <= 0){
      currenttime+=time_tmp;
      cout <<name.front()<<" "<<currenttime<<endl;
      time.pop();
      name.pop();
    }else{
      currenttime+=q;
      time.push(time_tmp - q);
      name.push(name.front());
      time.pop();
      name.pop();
    }
  }
  
  return 0;
}