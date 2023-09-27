#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
#define loop(i,n) for(int i = 0; i < (n); i++)
#define loops(i,f,n) for(int i = (f); i < (n); i++)
#define INF 1e9
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)cout<<"a == b"<<endl;
    else cout<<(a>b?"a > b":"a < b")<<endl;
}
