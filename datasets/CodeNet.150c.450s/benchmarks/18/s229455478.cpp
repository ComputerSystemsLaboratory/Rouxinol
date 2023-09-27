#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,i=0;
    b=100000;
    cin >> a;
    for(i=0;i<a;i++){
        b=b*1.05;
        b=((b-1)/1000);
        b=b*1000+1000;

    }

    cout << b << endl;



    //cout << endl;

return 0;

}