#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n,k=0,d[100];
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&d[i]);
    
    for(int i=0;i<n;i++)
        for(int j=n-1;j>i;j--)
            if(d[j]<d[j-1]){
                swap(d[j],d[j-1]);
                k++;
            }
    
    for(int i=0;i<n;i++)
        printf(i<n-1 ? "%d " : "%d\n",d[i]);
    
    printf("%d\n",k);
    
    return 0;
}