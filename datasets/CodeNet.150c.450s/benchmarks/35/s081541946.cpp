#include <iostream>
using namespace std;
int main (){
while (1){
long n,dset[5000],temp=0,max;
cin>>n;
if (n==0)break;
for (int i=0;i<n;i++){
        cin>>dset[i];
}
max=dset[0];
for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
                temp=temp+dset[j];
                if (max<temp){
                        max=temp;
                }
        }
temp=0;
}
cout<<max<<endl;
}
return 0;
}