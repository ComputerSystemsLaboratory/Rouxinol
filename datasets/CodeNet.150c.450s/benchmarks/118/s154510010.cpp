#include<iostream>
using namespace std;
int solve(int y,int m,int d)
{
    int sum=((y-1)/3)*590;
    y=y%3;
    if(y==2){
      sum+=195;
      if(m%2==1) sum+=((m-1)/2)*39+d;
      else sum+=(m-2)/2*39+d+20;
       } 
    else if(y==1){
      if(m%2==1) sum+=((m-1)/2)*39+d;
      else  sum+=(m-2)/2*39+d+20;   
       } 
    else  {
      sum+=390+(m-1)*20+d;   
       } 
   return sum; 
} 

int main(){
  int n,y,m,d; 
  cin>>n;      //imput number of the test cases
  for(int i=0;i<n;i++){
  cin>>y>>m>>d;
  //cout<<solve(1000,1,1)<<"  "<<solve(1,1,1)<<endl;
  cout<<solve(1000,1,1)-solve(y,m,d)<<endl; 
  } 
  getchar();getchar(); 
  return 0; 
} 
  