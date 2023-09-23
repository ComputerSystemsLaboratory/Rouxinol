#include <iostream>
using namespace std;

int main(){
    long long n,max,min,sum;
    int a[25565] = {0};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    sum = a[0];
    for(int i=1;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
        sum += a[i];
    }
    cout << min << " " << max << " " << sum << endl;
}