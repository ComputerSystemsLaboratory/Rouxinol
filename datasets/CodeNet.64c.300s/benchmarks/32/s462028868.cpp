#include <iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971
using namespace std;

int main(){
    
    long long max,min,sum,sum2,num;
    max = -1000001;
    min =  1000001;
    sum = 0;
    sum2 = 0;
    cin >> num;
    
    for(int ii=0;ii<num;ii++){
        int val;
        
        cin >> val;
        
        if(max < val){
            max = val;
        }
        if(min > val){
            min = val;
        }
        
        if( sum < 2000000000){
            sum += val;
        }
        else{
            sum2 += val;
        }
    }
    
    cout << min << " " << max << " " << sum + sum2 << endl;
    
    return 0;
}