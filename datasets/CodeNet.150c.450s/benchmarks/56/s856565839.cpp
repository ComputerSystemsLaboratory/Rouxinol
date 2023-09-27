//itp1_4-d
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector<long> a(n);
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 long rmax=-1000001;
 long rmin=1000001;
 long rsum=0;
 for(int i=0;i<n;i++){
  rsum+=a[i];
  rmax=max(a[i],rmax);
  rmin=min(a[i],rmin);
 }
 cout<<rmin<<" "<<rmax<<" "<<rsum<<endl;
 return 0;
}