#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(void) {

    int d;
    while(cin >> d){
        int n = 600 / d;
        int ans = 0;
        for(int i=0; i<n; i++) ans += (i*d)*(i*d) * d;

        cout << ans << endl;
    }



    return 0;
}