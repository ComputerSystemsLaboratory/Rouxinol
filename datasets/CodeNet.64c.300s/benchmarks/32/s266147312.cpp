#include <iostream>
using namespace std;
int main(void){
   long long int n,a[10001] = {0},max,min,sum=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for(long long int i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }        
    } 
    for(long long int i=0;i<n;i++){
	sum = sum + a[i];
}
    cout << min << " " << max << " " << sum;
    
    cout << endl;
     
}
