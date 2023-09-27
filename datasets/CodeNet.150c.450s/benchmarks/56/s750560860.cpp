#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,  n, sum=0, max=-1000000, min=1000000;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x > max){
            max = x;
        }
        if(x < min){
            min = x;
        }
        sum += x;
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}
