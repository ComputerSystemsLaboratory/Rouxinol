using namespace std;
#include <iostream>
int gcd(int l,int m){
    if (m==0) {
        return l;
    }
    return gcd(m, l%m);
}
int main() {
    // insert code here...
    int p,r;
    cin>>p>>r;
    cout<<gcd(p,r)<<endl;
    return 0;
}
