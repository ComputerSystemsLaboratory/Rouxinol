#include <iostream>
using namespace std;
bool call(int x) {
    bool ret = false;
    if (x%3==0) ret = true;
    else {
        while(x) {
            if (x%10==3){
                ret = true;
                break;
            }
            x/=10;
        }
    }
    return ret;
}
int main() {
    int n,i,x;
    cin>>n;
    for (i=1;i<=n;i++) {
        if (call(i)) cout << " " << i;
    }
    cout << endl;
    return 0;
}