#include<iostream>
using namespace std;

int main(){
int total;
int change;
int count=0;
while(true){
 cin>>total;
 if(total==0){
    break;
  } 
 change=1000-total;
 while(true){
   if(change>=500){
     change-=500;
     count++;
   }else if(change>=100){
     change-=100;
     count++;
   }else if(change>=50){
     change-=50;
     count++;
   }else if(change>=10){
     change-=10;
     count++;
   }else if(change>=5){
     change-=5;
     count++;
   }else{
     change--;
     count++;
    }
  if(change==0){
    break;
  }
 }
 cout<<count<<"\n";
 count=0;
}
return 0;
}