#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int  a=0,b=0,c=0,d=0,i=0;
    char arr[1000]={};
    for(i=0;;i++){
        cin >> a >> b >> c;
        d++;
        if(a==-1 && b==-1 && c==-1)break;
        else{
            if(a==-1 || b==-1)cout << 'F' << endl;
            else if(a+b >= 80)cout << 'A' << endl;
            else if(a+b >=65 && 80 > a+b)cout << 'B' << endl;
            else if(a+b >=50 && 65 > a+b)cout << 'C' << endl;
            else if(a+b >=30 && 50 > a+b){
                if(c >=50)cout << 'C' << endl;
                else cout << 'D' << endl;
            }
            else if(30 > a+b)cout << 'F' << endl;
        }
    }
    /* for(i=0;i<d;i++){
        cout << arr[i];
         if(i<d-1)cout << endl;
     }*/
    //cout << endl;

return 0;

}

//1793081