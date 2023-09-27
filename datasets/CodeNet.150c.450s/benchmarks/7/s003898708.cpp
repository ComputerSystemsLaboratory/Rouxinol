#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,temp;
    for(i=1;i<=10;i++){
        cin>>a[i];
    }
        temp = a[0];
        for(i=1;i<=10;i++){
        for(j=i;j<=10;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j]= temp;
            }
        }
    }
    for(i=1;i<=3;i++){
        cout<<a[i]<<endl;
    }
    return 0;

}