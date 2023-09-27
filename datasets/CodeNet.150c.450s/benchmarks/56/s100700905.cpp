#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    if(n==0)return 0;
    long sum,min,max;
    sum=0;
    min=0;
    max=0;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        if(sum==0){
            sum=x;
            min=x;
            max=x;
        }else{
            sum+=x;
            if(min>x)min=x;
            if(max<x)max=x;
        }
    }
    cout << min << " " << max << " " << sum << endl;
}