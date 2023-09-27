#include <iostream>
using namespace std;

int  Q[100000];
int f=0,e=0,f2=0,e2=0;
int Q2[100000];


void input_time(int a){
  Q[e]=a;
  e=(e+1)%100000;
}

int output_time(){
  int a=Q[f];
  f=(f+1)%100000;
  return a;
}

void input_name(int a){
  Q2[e2]=a;
 e2=(e2+1)%100000;
}

int output_name(){
  int a=Q2[f2];
  f2=(f2+1)%100000;
  return a;
}

char name[100000][15];

int main(){
  int n,q;
  int time,count;
  
  cin>>n>>q;
  for(int i=0;i<n;i++){
    cin>>name[i]>>time;
    input_time(time);
    input_name(i);
  }
  count=0;
  while(1){
    if((time=output_time())>q){
      input_time(time-q);
      input_name(output_name());
      count+=q;
    }else{
      count+=time;
      
      cout<<name[output_name()]<<' '<<count<<endl;
      
    }
    if(e==f){
      break;
    }
  }
  return 0;
}
  
  
  