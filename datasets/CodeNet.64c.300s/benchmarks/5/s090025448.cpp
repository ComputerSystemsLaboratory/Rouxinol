#include<iostream>
#include<algorithm>
using namespace std;
 
const int MAX_N = 9;
int a[MAX_N];
   
int main(){
 
    for(int i=0; i<=MAX_N; i++){
        cin >> a[i];
    }
      
    sort(a, a+10);
    cout << a[9] << endl << a[8] << endl << a[7] << endl;
 
    return 0;
}