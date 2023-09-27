#include <cstdio>
#include <algorithm>

int w[100000];
int n,k;

int truck_num(long long int p){
    int i = 0;
    long long int truck = 1;
    long long int load = 0;
    for(i=0;i<n;i++){
        if(load+w[i]>p){
            truck++;
            load=w[i];
        }else{
            load+=w[i];
        }
    }
    return truck;
}

int slv(int k, int maxw){
    long long int l = maxw-1;
    long long int r = 100000*10000;
    long long int m;
    while((r-l)>1){
        m = (l+r)/2;
        if(truck_num(m)>k)l=m;
        else r=m;
    }
    return r;
}

int main(){
    int i;
    int maxw=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",w+i);
        if(maxw<w[i])maxw=w[i];
    }
    printf("%d\n",slv(k,maxw));
    return 0;
}


