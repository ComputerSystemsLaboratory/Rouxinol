#include<iostream>
using namespace std;

int main(){
   int N;
   int min,max;
   long sum;
   int temp;
   
   cin >> N;
   cin >> temp;
   min = temp; max = temp; sum = temp; 
   for(int i = 1;i < N; i++){
       cin >> temp;
       if(min > temp) min = temp;
       if(max < temp) max = temp;
       sum += temp;    
   } 
   
   cout << min << " " << max << " " << sum << endl;
   return 0;
}