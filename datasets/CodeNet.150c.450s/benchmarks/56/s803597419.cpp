#include <iostream>
using namespace std;
int main(void){
      long long n,max=0,min=0,sum=0;
      cin >> n ;
      long long a[n];
      for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(i==0){
                        max=a[i];
                        min=a[i];
            }
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
      }
      cout << min << " " << max << " " << sum << endl;
      return 0;
}
      


