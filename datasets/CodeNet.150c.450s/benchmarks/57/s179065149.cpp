#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int i = 0;
    for(i=0;;i++){
        int a=0,b=0;
        string c;
        cin >> a >> c >> b;
        if (c=="+"){
            cout << a+b << endl;
        }
        if (c=="-"){
            cout << a-b << endl;
        }
        if (c=="*"){
            cout << a*b << endl;
        }
        if (c=="/"){
            cout << a/b << endl;
        }
        if (c =="?")break;
    }
}