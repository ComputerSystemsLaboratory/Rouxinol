#include <iostream>
using namespace std;
int main(void){
    int h, m, s, S;
    cin>>S;
    h=S/(60*60);
    m=(S/60)%60;
    s=S%(60);
    cout<<h;
    cout<<":";
    cout<<m;
    cout<<":";
    cout<<s;
    cout<<endl;
}
