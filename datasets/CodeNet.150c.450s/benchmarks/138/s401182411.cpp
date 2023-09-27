#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,c=0;
    cin >> a >> b;
    if(a<b){
        swap(a,b);
    }
    while(b>0){
        c = a%b;
        a=b;
        b=c;
    }
    cout << a;
    cout << endl;
}