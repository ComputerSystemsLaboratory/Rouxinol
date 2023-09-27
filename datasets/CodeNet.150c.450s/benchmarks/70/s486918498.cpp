#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int mtod[]={0,31,60,91,121,152,182,213,244,274,305,335};
    string wd[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    while (1) {
        int m,d;
        cin>>m>>d;
        if (m==0)
            break;
        int day=mtod[m-1]+d;
        cout<<wd[day%7]<<endl;
    }
    return 0;
}
