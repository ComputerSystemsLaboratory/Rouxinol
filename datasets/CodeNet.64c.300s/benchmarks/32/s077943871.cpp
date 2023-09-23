#include <iostream>

using namespace std;

int main(){
    int n,a;
    int max,min;
    long sum=0;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a;
        if(i==0){
            max = min = a;
        }
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
