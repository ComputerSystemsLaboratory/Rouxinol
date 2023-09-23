#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,iii=0,n=0;
    cin >> n;
    for(iii=0;iii<n;iii++){
        cin >> a;
        if(a==2 || a==3 || a==5 || a==7){
            b++;
        }

        else if(a>=9 && a%2!=0){
            int i=3;
            b++;
            while(i<=sqrt(a)){

                if(a%i==0){
                    b--;
                    break;
                }
                i=i+2;
            }
        }
    }
    cout << b;
    cout << endl;
}