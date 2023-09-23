#include<iostream>
using namespace std;

int main(){
        int n, i=1;
        long long  max = -1000000, min = 1000000, sum = 0, d;
        cin >> n;
        while (i <= n){
        i++;
        cin >> d;
        min = (d < min)?d:min;
        max = (d > max)?d:max;
        sum = sum + d;
}
        cout << min << " " << max << " " << sum << endl;

        return 0;
}