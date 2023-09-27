#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    a=b=0;
    cin >> a;
    cin >> b;
    if(a < b){
        cout << "a < b" << endl;
    }
    else if (a == b){
        cout << "a == b" << endl;
    }
    else{
        cout << "a > b" << endl;
    }
}