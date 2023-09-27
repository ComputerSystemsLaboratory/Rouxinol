#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if((1 <= a)&&(a <= 100)&&(1 <= b)&&(b <= 100))
        cout<<a*b<<" "<<2*(a+b)<<endl;
    return 0;
}

