#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n,k=0,d[100],min;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&d[i]);
    
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++)
            if(d[j]<d[min]) min=j;
        if(min!=i){
            swap(d[i],d[min]);
            k++;
        }
    }
    
    for(int i=0;i<n;i++)
        printf(i<n-1 ? "%d " : "%d\n",d[i]);
    
    printf("%d\n",k);
    
    return 0;
}