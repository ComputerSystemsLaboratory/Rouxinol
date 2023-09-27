#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int a=0,b=0,c=0,i=0,kazu=0;

        cin >> a;
        cin >> b;
        cin >> c;
        for(i=a;i<=b;i++){
            if(c%i == 0){
                kazu++;
            }

        }
   cout << kazu << endl;

}