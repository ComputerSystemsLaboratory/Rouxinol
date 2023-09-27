#include <iostream>

using namespace std;
int c[10001];

int main()
{
    int n;
    cin>>n;
    for (int x=1; x<=100; x++) {
        for (int y=1; y<=100; y++){
            for (int z=1; z<=100; z++) {
                int f=x*x+y*y+z*z+x*y+x*z+z*y;
                if (f > n)
                    break;
                c[f]++;
            }
        }
    }
    for (int i=1; i<=n; i++)
        cout<<c[i]<<'\n';
    return 0;
}