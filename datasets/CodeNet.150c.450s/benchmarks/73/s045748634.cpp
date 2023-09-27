#include <cstdio>

int a[100007],n,q;
int bit[100007];

template<class T>
void build(T arr[],T bit[],unsigned int n){
    bit[0]=0;
    for(auto i=2u;i<n;i++) bit[i]=bit[i-1]+arr[i];
    for(auto i=n-1;i>0;i--) bit[i]-=bit[i-(i&-i)];
}

template<class T>
void update(T bit[],unsigned int n,unsigned int index,T diff){
    for(auto i=index;i<n;i+=(i&-i)) bit[i]+=diff;
}

template<class T>
T prefix(T bit[],unsigned int bound){
    T ret=0;
    while(bound>0){
        ret+=bit[bound];
        bound-=(bound&-bound);
    }

    return ret;
}

template<class T>
T query(T bit[],unsigned int l,unsigned int r){
    return prefix(bit,r-1)-prefix(bit,l-1);
}


int main(){

    scanf("%d%d",&n,&q);
    for(int i=0;i<q;i++){
        int com,x,y;
        scanf("%d%d%d",&com,&x,&y);
        if (com)
            printf("%d\n",query(bit,x,y+1));
        else 
            update(bit,n+1,x,y);
    }
    return 0;
}
