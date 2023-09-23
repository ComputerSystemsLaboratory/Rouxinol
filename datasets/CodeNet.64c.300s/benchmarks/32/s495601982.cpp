#include<iostream>
using namespace std;

int main(){
int n,i;
long a,min,max,sum;
min= 1000000;
max= -1000000;
sum=0;
cin >>n;
i=1;
while(i<=n){
     cin >> a;
      if (a<min) min=a;
      if (a>max) max=a;
      sum=sum+a;
      i++;
}
cout << min<<" "<<max<<" "<<sum<<endl;;
    return 0;
}