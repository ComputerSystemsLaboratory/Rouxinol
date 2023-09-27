#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int minj=i;
        int flag=0;
        for(int j=i;j<n;j++){
            if(a[j]<a[minj]){
                minj=j;
                flag=1;
            }
        }
        int tmp=a[i];
        a[i]=a[minj];
        a[minj]=tmp;
        ans+=flag;
    }
    for(int i =0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
    printf("%d\n",ans);
    return 0;
}