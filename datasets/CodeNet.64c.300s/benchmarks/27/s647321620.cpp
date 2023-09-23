#include<iostream>
using namespace std;

int main(){
   int n,m;
   int counter=0;
   int sum = 0;
   
   while(1) {
    
    cin >> n >> m;
    if (n == 0 && m ==0) break; 
    for (int i = 1; i <= n -2; i++) {
       for (int j = i+1; j <= n -1;j++) {
           for (int k = j+1; k <= n; k++) {
               sum = i + j + k;
               
               if(sum == m) counter += 1;
           }
       }
        }
     cout << counter << endl;
     counter = 0;            
   }
   
   
   
    return 0;
}