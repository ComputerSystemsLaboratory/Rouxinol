#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    const int m[6] = {500, 100, 50, 10, 5, 1};

    while (cin>>n, n){
        int ans = 0;
        int ret = 1000 - n;
        for (int i = 0; i < 6; i++){
            int t = ret / m[i];
            ret -= t * m[i];
            ans += t;
        }

        cout<<ans<<endl;
    }
    return 0;
}