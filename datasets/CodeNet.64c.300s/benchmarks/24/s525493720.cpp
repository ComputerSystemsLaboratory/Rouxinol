#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,a1=0,b1=0,i=0,n=0,j=0;
    for(i=1;;i++){
        cin >> n;
        if(n==0)break;
        for(j=0;j<n;j++){
            cin >> a >> b;
            if(a>b){
                a1+=a+b;
            }
            if(a<b){
                b1+=a+b;
            }
            if(a==b){
                a1+=a;
                b1+=b;
            }

        }
        cout << a1 << ' ' << b1 <<endl;
        a1=b1=0;
    }
    //cout << b;
}