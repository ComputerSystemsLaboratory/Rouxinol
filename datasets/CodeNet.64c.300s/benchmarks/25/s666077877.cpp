#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int c[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>c[0]>>c[1]>>c[2]>>c[3]){
        int h=0,b=0;
        for(int i=0;i<4;i++){
            if(a[i]==c[i])
                h++;
            else{
                for(int j=0;j<4;j++){
                    if(a[i]==c[j]){
                        b++;
                        break;
                    }
                }
            }
        }
        cout<<h<<" "<<b<<endl;
    }
    return 0;
}