#include <iostream>
using namespace std;
int main(void){

    int n;
    cin >> n;
    int kazu[n];
    int hanten[n];
    for(int i=0;i<n;i++){
        cin >> kazu[i];
    }
    
   
   
    for(int i=0;i<n;i++){
         hanten[n-i-1] = kazu[i];
    }
 
  
    for(int i=0;i<n;i++){
        kazu[i]=hanten[i];
    }
    
    
    for(int i=0;i<=n-2;i++){
        cout << kazu[i]<<" ";
    }
    cout << kazu[n-1];
    cout << endl;
}


