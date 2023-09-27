#include<iostream>
#include<math.h>
using namespace std;
bool snt(int a){
    if(a==2 || a==3)
        return true;
    if(a<2)
        return false;
   int n=(int)sqrt(a);
    for(int i=2;i<= n;i++)
        if(a%i==0)
            return false;
    return true;
}

int main(){
    int n,b,d=0;
    cin >>n;
    while(n>0)
    {        n--;
        cin >>b;
        if(snt(b))
            d++;
    }
    cout <<d<<endl;
    return 0;
}