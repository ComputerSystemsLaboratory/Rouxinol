#include <iostream>
#include <vector>
using namespace std;

int formula(int x,int y,int z) {
    int ans = x*x+y*y+z*z+x*y+x*z+y*z;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int x(1),y(1),z(1),formul(0),c(0);
    for (int i=1;i<=n;i++)  {
        for (int x=1;x<=99;x++) {
            for (int y=1;y<=99;y++) {
               for (int z=1;z<=99;z++) {
                    formul=formula(x,y,z);
                    if (formul==i) c++;
                    if (formul>i) break;
                }
            }
        }
        
        cout<<c<<endl;
        c=0;
    }
}