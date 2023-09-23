#include<iostream>
using namespace std;
int main(){
    long i,n,max = -1000000,min=1000000,sum=0;
    cin >> n;
    long number[n];
    for(i=0;i<n;i++){
        cin >> number[i];
    }
    for(i=0;i<n;i++){
        if(number[i] < min){
            min = number[i];
        }
        if(number[i] > max){
            max = number[i];
        }
        sum += number[i];
    }
    
    cout << min << " " << max << " " << sum << endl;
    
    return 0;
    
}
