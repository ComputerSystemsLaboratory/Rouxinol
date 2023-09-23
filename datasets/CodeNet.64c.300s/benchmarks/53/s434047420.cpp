#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,i;
    cin>>a>>b>>c;
    i=0;
    for (int x = a; x <= b; x++){
        d=c%x;
        if (d==0) i+=1;
    }
    cout<<i<<endl;
    return 0;
}
