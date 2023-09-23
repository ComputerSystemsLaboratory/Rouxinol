#include<iostream>
using namespace std;

int main(){
    long long n,i,array[10000],max,min,total=0;
    
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> array[i];
    }
    max = array[0];
    min = array[0];
    for(i = 0; i < n; i++){
        if(max < array[i]) max = array[i];
        if(min > array[i]) min = array[i];
        total += array[i];
    }
    cout << min << " " << max << " " << total << endl;
    return 0;
}
