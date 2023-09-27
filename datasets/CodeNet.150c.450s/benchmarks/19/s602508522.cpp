#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int x=0,y=0,a=0;
   for (a=1;;a++){
        cin >> x;
        cin >> y;
        if ((x == 0)&&(y==0))break;
        if (x<=y){
            cout << x << " " << y << endl;
        }
        else{
            cout << y << " " << x << endl;
        }
   }

}