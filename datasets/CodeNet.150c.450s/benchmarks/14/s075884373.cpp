#include<iostream>
using namespace std;

int main(){
   int N;
   int temp;
   cin >> N;
   for(int i = 1;i <= N;i++){
       temp = i;
       if(i%3 == 0){
           cout << " " << i;
       }else{
           while(temp){
               if(temp%10 == 3){
                   cout << " " << i;
                   break;
               } 
               temp /= 10;
               } 
           }
       }
       cout << endl;
       return 0;
   }