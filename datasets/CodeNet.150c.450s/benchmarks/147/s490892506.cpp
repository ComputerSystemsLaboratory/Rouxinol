#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
using namespace std;
int a[100000];

int main()
{
    int n;cin>>n;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
             for(int k=1;k<=100;k++){
                  int x=i*i+j*j+k*k+i*j+j*k+k*i;
                  a[x]+=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}