#include <iostream>

using namespace std;

int main(){
    int n,a;
    int max = -10000000,min = 10000000;
    long sum=0;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a;
        if(max<a){
            max = a;
        }
        if(min>a){
            min = a;
        }
        sum += a;
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}
