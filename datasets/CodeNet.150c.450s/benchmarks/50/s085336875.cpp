#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int x;
    while(cin >> x){
        if(x==0){
            break;
        }
        int cnt=0;
        int a=1000-x;
        cnt+=a/500;
        a%=500;
        cnt+=a/100;
        a%=100;
        cnt+=a/50;
        a%=50;
        cnt+=a/10;
        a%=10;
        cnt+=a/5;
        a%=5;
        cnt+=a;
        cout << cnt <<endl;
    }
    
    return 0;
}

