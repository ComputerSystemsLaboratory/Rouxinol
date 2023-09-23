#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX=200000;
int main()
{
    int n,R[MAX];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>R[i];
    }
    int maxv=R[1]-R[0];
    int minv=R[0];
    for (int i = 1; i < n; ++i) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }
    cout<<maxv<<endl;

}
