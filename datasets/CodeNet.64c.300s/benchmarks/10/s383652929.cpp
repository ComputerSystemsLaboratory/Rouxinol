#include <iostream>

using namespace std;

int main()
{
    int n;
    n=10000;
    for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    if(x>y){
cout<<y<<" "<<x<<endl;}
 else if(x==0&&y==0)
    {return 0;}
 else{
     cout<<x<<" "<<y<<endl;
 }
    }
    return 0;
}

