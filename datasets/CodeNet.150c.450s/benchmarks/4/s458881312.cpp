#include <iostream>
using namespace std;
int main(void){
    int m,f,r;
    char i;
    while(1){
        cin>>m>>f>>r;
        if(m==-1||f==-1){i='F';}
        else if(m+f>=80){i='A';}
        else if(m+f>=65&&m+f<=79){i='B';}
        else if(m+f>=50&&m+f<=64){i='C';}
        else if(m+f>=30&&m+f<=49){if(r>=50){i='C';}else{i='D';}}
        else if(m+f<=29){i='F';}
        if(m==-1&&f==-1&&r==-1){break;}
        cout<<i<<endl;
    }
    return 0;
}
