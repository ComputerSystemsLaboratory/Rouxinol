#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

        int a,b,c;

        scanf("%d %d %d",&a,&b,&c);

        if(a<b && b<c)
           cout << "Yes" << endl;
        else
           cout << "No" << endl;

        return 0;
}
