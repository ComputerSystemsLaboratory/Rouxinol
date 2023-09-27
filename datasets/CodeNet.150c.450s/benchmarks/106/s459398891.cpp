#include <iostream>
using namespace std;
int main(void){
    int a,b,c;int x[10001]={};int ans=0;
    cin >> a >> b >> c;
    for(int i=1;i<=c;i++){if(c%i==0){x[i]=1;}}
    for(int j=a;j<=b;j++){ans+=x[j];}
    cout << ans << endl;
}
