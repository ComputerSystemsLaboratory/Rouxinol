#include<iostream>
using namespace std;
 
int f(int _i)
{
    return _i*_i;
}
 
int main()
{
    int d;
    while(cin >> d){
        int S = 0;
 
        for(int i=1;i<600/d;++i){
            S += f(d*i)*d;
        }
 
        cout << S << endl;
 
    }
    return 0;
}