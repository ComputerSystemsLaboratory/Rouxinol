#include<iostream>
using namespace std;
int main(){

  int N;
  cin>>N;
  int i;
  int count=0;
  int x;
  int y;
  int z;
  for(i=1;i<=N;i++){
  
    count=0;
    for(x=1;x*x<i;x++){
    
      for(y=x;y*y<i;y++){
      
        for(z=y;z*z<i;z++){
        
          if(x*x+y*y+z*z+x*y+y*z+z*x==i){
          
            if(x==y){
              
              if(y==z){
              
                count+=1;
              }
              else{
              
                count+=3;
              }
            }
            else if(y==z){
            
              count+=3;
            }
            else{
              
              count+=6;
            }
            //cout<<x<<","<<y<<","<<z<<endl;
          }
        }
      }
    }
    cout<<count<<endl;
  }
}