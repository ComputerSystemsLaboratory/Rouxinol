#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,c=0,i=0,n=0;//b-max,c=min
    cin >> n;
    cin >> a;
    b=-2147483648;
    //b=a;
    c=a;
    for(i=1;i<n;i++){
        cin >> a;
        if(b<a-c){
            b=a-c;
        }
        if(c>a){
            c=a;
        }

    }
    cout << b;
    cout << endl;
    //cout << b;
}