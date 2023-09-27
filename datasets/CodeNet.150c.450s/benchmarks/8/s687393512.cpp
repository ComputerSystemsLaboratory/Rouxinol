#include<string>
#include<iostream>
using namespace std;
int main(){
     string ab,bc,cd=" ";
     int k,t=0,h=0;
     cin>>k;
     for(int n=0;n<k;n++){
     cin>>ab>>bc;
     if(ab==bc){
        t=t+1;
        h=h+1;
     }else if(ab>bc){
         t=t+3;
     }else{
         h=h+3;
     }
     }
     cout<< t << cd << h <<endl;
return 0;
}