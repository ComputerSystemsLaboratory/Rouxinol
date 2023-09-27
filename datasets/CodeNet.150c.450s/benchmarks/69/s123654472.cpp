#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int t=0; t<n; t++){
        int b=0, c=0;
        int a[10];
        int i;
        if(!(cin>>a[0])) break;
        for(i=1; i<10; i++) cin>>a[i];
        for(i=0; i<10; i++){
            if(b<c){
                if(c<a[i]) c=a[i];
                else if(b<a[i]) b=a[i];
                else break;
            }else{
                if(b<a[i]) b=a[i];
                else if(c<a[i]) c=a[i];
                else break;
            }
        }
        cout<<(i==10?"YES\n":"NO\n");
    }
    return 0;
}