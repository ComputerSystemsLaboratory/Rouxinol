#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int  a=0,b=0,c=0,n=0,x=0,i=0,j=0,k=0;
    for(c=0;;c++){
        cin >> n >> x;
        if(n==0 && x==0)break;
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    a=i+j+k;
                    if(a==x)b++;

                }
            }
        }
        cout << b << endl;
        b=0;
    }

    /* for(i=0;i<d;i++){
        cout << arr[i];
         if(i<d-1)cout << endl;
     }*/
    //cout << endl;

return 0;

}

//1793081