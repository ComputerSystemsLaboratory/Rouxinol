
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int i,a[5];
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=4;i>=0;i--){
        if(i==0)cout<<a[i];
      else  cout<<a[i]<<" ";
    }
    cout<<endl;
     return 0;
}