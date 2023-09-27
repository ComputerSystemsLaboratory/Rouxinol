#include<iostream>
using namespace std;
int main(){
int n, i, p;
while(cin>>n,n){
int min=1000,max=0,total=0;
for(int i=0;i<n;++i){
cin >> p;
if(p>max)max=p;
if(p<min)min=p;
total += p;
}
cout << (total-max-min)/(n-2) << "\n";
}
}