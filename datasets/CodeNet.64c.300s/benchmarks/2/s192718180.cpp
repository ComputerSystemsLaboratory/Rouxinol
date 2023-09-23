#include<iostream>
using namespace std;

int main(){
   int a, b, c;
   char poi;
   while(1){
    cin >> a >> b >> c;
    if(a == -1 && b == -1 && c == -1) break;
    int sum = a + b;
    if(sum >= 80) poi = 'A';
    else if(sum >= 65 && sum < 80) poi = 'B';
    else if(sum >= 50 && sum < 65) poi = 'C';
    else if(sum >= 30 && sum < 50){
           poi = 'D';
           if(c >= 50) poi = 'C';
           }
    else if(sum < 30) poi = 'F';
    
    if(a == -1 || b == -1) poi = 'F';
            
    cout << poi << endl;

    }
    
    return 0;

   }