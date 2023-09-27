#include <iostream>
#include <cmath>
  
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double x[4],y[4];
        for(int j=0;j<4;j++)
            cin>>x[j]>>y[j];
        if(abs((x[3]-x[2])*(y[1]-y[0])-(x[1]-x[0])*(y[3]-y[2]))<1e-10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
      
    return 0;
}
