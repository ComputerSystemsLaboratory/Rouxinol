#include <bits/stdc++.h>
using namespace std;


bool sosuu(int l){
    if(l<=1)return false;
    else if (l==2) return true;
    else if (l%2==0) return false;
    for (int i=3;i<sqrt(l)+1; i+=2) {
        if (l%i==0) {
            return false;
            break;
        }
    }
    return true;
}
int main() {
    // insert code here...
    int k,p,a=0;
    cin>>k;
    for (int y=0; y<k; y++) {
        cin>>p;
        if (sosuu(p)) {
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}
