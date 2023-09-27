#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum=0,max=-1000000,min=10000000;
    for(int i=0;i<n;++i){
        long long a;
        cin >> a;
        sum+=a;
        min = (min>a) ? a : min;
        max = (max<a) ? a : max;
    }
    cout << min <<' '<< max <<' '<< sum << endl;
}
