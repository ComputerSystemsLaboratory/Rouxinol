#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int n;
    long long sum = 0, min, max, a;
    
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(i == 0){
            max = a;
            min = a;
        }
        if(max < a){
            max = a;
        } else if(min > a){
            min = a;
        }
        sum = sum + a;
    }
    cout << min << " " << max << " " << sum << "\n";
    
    return 0;
}