#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[10001]={0};
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
        for(int k = 1; k<=n; k++) {
            int x =(i*i) + (j*j) + (k*k) + (i*j) + (j*k) + (k*i);
        if(x > n) break;

        else arr[x]++;

        }
    }
}
for(int i=1; i<=n; i++) {
    cout<<arr[i]<<endl;
}
return 0;
}
