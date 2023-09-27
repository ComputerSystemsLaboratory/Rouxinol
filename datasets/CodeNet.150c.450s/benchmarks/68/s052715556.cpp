#include <bits/stdc++.h>

using namespace std;

int main(void){
    while (1){
        int n;
        cin>>n;

        if(n==0)break;

        int a[1010];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int min_a = INT_MAX;
        for(int i=1; i<n; i++){
            min_a = min(min_a, abs(a[i-1]-a[i]));
        }
        cout<<min_a<<endl;
    }


    return 0;


}
