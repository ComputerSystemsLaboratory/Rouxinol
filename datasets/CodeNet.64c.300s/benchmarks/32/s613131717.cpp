#include <iostream>
using namespace std;

int main(){
    int min,max,n,i;
    int *data;
    long sum;
    cin>>n;
    data= new int[n];
    for (i=0;i<n;i++)cin>>data[i];
    min=data[0];max=data[0];sum=data[0];
    for (i=1;i<n;i++){
      sum+=data[i];
      if (min>data[i])min=data[i];
      else if (max<data[i])max=data[i];
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;


}

