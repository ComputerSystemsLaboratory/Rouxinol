#include <iostream>
using namespace std;
int main() {
    int n,i,s,h,c,d,num;
    char suit;
    cin>>n;
    s=h=c=d=0;
    for (i=0;i<n;i++) {
        cin >> suit >> num;
        if (suit == 'S') s |= 1<<num;
        else if (suit == 'H') h |= 1<<num;
        else if (suit == 'C') c |= 1<<num;
        else if (suit == 'D') d |= 1<<num;
    }
    for (int i=1;i<=13;i++) {
        if ((s & 1<<i) == 0) cout << "S " << i << endl;
    }
    for (int i=1;i<=13;i++) {
        if ((h & 1<<i) == 0) cout << "H " << i << endl;
    }
    for (int i=1;i<=13;i++) {
        if ((c & 1<<i) == 0) cout << "C " << i << endl;
    }
    for (int i=1;i<=13;i++) {
        if ((d & 1<<i) == 0) cout << "D " << i << endl;
    }
    return 0;
}