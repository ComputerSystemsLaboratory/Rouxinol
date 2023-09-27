#include <iostream>
using namespace std;

int bubbleSort(int a[],int n){
    int flag=1;
    int c=0;
    for(int i=0;flag;i++){
        flag=0;
        for(int j=n-1;j>i;j--){
            if(a[j-1]>a[j]){
                swap(a[j],a[j-1]);
                flag=1;
                c++;
            }
        }
    }
    return c;
}

int main(void){
    int n;
    cin>>n;
    int a[n];
    string s="";
    for(int i=0;i<n;i++) cin>>a[i];
    int c=bubbleSort(a,n);
    for(int i=0;i<n;i++){
        cout<<s<<a[i];
        s=" ";
    }
    cout<<"\n"<<c<<"\n";
}
