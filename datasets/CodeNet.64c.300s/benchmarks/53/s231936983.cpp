#include <iostream>
using namespace std;
int main(void){
    int a,b,c,x,i;
    cin >> a;
    cin >> b;
    cin >> c;
    i=0;
    for(x=a;x<=b;x++)
    if((c%x)==0){
        i+=1;
    }else{
        i=i;
    }
    cout << i;
    cout << endl;
}

