#include<iostream>
using namespace std;

int main(){
    int N;
    int n = 0;
    int counter = 0;
   while(1) {
       cin >> N;
       if (N == 0) break;
       
       for (int i = 1; i <= N/2; i++) {
           for (int j = i+1; j <= N/2 + 1; j++) {
                    // cout << "I " << i << " J " << j << "NUM " << (j-i+1) << endl;
                    if((j-i+1)<2) continue;
                    if(((j-i+1)*(i + j)) == 2 * N) {
                      
                        counter +=1;    
                    } 
                       
           }
           
           
           
       }
       cout << counter << endl;
       counter = 0;
       
   }
   
   
    return 0;
}