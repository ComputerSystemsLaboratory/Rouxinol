#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    while(1){
    int n = 0;
    scanf("%d",&n);
    if(n==0)break;
    
    int a[1000] = { 0 };
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    long long int sa = 1000000;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                if(a[i]-a[j]<sa && a[i]-a[j]>=0)sa = a[i]-a[j];
            }
            else{
                if(a[j]-a[i]<sa&& a[j]-a[i]>=0)sa = a[j]-a[i];
            }
        }
    }
    
    cout << sa << endl;
    }
    
    return 0;
}
