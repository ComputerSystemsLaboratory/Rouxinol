#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long i[1000000];
    int j;
    long min = 1000000;
    long max = -1000000;
    long sum = 0;
    for(j = 0; j < n; j++){
        cin >> i[j];
        if(min > i[j])
            min = i[j];
        if(max < i[j])
            max = i[j];
        sum += i[j];
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}
    