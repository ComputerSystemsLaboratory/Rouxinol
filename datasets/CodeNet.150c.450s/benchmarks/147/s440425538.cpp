#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,y,z,ans,a[100000]={0};
//    for(i=1;i<=10;i++){
//        cout<< a[i] <<endl;
//    }
    cin>> n;

    for(x=1;x<=102;x++){
        for(y=1;y<=102;y++){
            for(z=1;z<=102;z++){
                ans = (x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(z*x);
                if(ans<=n)a[ans]++;
            }
        }
    }

    for(i=1;i<=n;i++){
        cout<< a[i] <<endl;
    }
    return 0;
}
