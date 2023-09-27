#include <iostream>

using namespace std;

int main() {
    int a,b,c,t,s;
    cin>>a>>b>>c;
    t=a;
    s=0;
    while(t <= b){
        if(c%t == 0){
            s++;}
        t++;
    }
    cout<<s<<endl;
    return 0;
}