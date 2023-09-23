#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while (n--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if (a*a + b*b ==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            
                cout<<"YES"<<endl;
                else 
                    cout<<"NO"<<endl;
            
        }
    return 0;
}
