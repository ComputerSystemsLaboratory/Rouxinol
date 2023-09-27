#include <iostream>
using namespace std;
static int const MAX_COUNT = 200000;
static int const MIN_VALUE = 1;
static int const MAX_VALUE = 1e9;


int main()
{
    int R[MAX_COUNT], n;
    cin>>n;
    for(int i=0;i<n;i++)cin >> R[i];

    int maxv = MIN_VALUE- MAX_VALUE;
    int minv = R[0];

    for(int i=1;i<n;i++){
      maxv=max(maxv,R[i]-minv);
      minv = min(minv,R[i]);
    }

    cout<< maxv <<endl;

    return 0;
}