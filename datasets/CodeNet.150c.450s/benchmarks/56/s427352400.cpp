#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    long i = 0;
    long kazu=0,iti=0;
    long a=0,b=0,max=0,min=0;
    cin >> kazu;
    if(kazu==1){
        cin>>iti;
        max=iti;
        min=iti;
        b=iti;
    }
    else{
        cin>>iti;
        max=iti;
        min=iti;
        b=iti;
        for(i=0;i<kazu-1;i++){

           cin >> a;
           b+=a;
           if(a>max)max=a;
           if(a<min)min=a;
        }
    }

    cout << min << ' ' << max << ' '<< b << endl;
}