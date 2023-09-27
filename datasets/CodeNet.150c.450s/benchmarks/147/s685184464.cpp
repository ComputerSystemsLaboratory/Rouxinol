#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,x,y,z,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(x=1;x<n;x++){
            for(y=1;y<n;y++){
                for(z=1;z<n;z++){
                    if(x*x+y*y+z*z+x*y+x*z+y*z==i) cnt++;
                    if(x*x+y*y+z*z+x*y+x*z+y*z>i) break;
                }
                z=1;
                if(x*x+y*y+z*z+x*y+x*z+y*z>i) break;
            }
            z=1,y=1;
            if(x*x+y*y+z*z+x*y+x*z+y*z>i) break;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}