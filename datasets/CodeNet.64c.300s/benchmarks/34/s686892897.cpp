#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n,a[100];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int j=0;j<n;j++)
        printf(j+1==n ? "%d\n" : "%d ",a[j]);
    
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--)
            if(a[j-1]>a[j])
                swap(a[j-1],a[j]);
        
        for(int j=0;j<n;j++)
            printf(j+1==n ? "%d\n" : "%d ",a[j]);
    }
    return 0;
}