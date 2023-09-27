#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(void){
    int n;
    while(1){
cin>> n;
if(n==0)break;
vector<int> a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end());
int min=a[1]-a[0];
for(int i=1;i<n;i++){
if(a[i]-a[i-1]<min)
min=a[i]-a[i-1];
}
cout<<min<<endl;
    }
    return 0;
}