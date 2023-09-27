#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

        int a,b;

        scanf("%d %d",&a,&b);

        if(a<b)
           cout << "a < b" << endl;
        else if(a>b)
           cout << "a > b" << endl;
        else
           cout << "a == b" << endl;

        return 0;
}
