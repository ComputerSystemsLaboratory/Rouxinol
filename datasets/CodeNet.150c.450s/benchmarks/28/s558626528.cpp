#include <cstdio>

int main(){
    int i, n, k;
    scanf("%d %d",&n,&k);
    int w[n];
    int p = 0;
    int sum = 0;
    for(i=0;i<n;i++){
        scanf("%d",w+i);
        sum += w[i];
    }
    p = sum / k;
    if(sum%k)p++;
    int p_, k_;
    for(;;p++){
        p_ = 0;
        k_ = 0;
        for(i=0;i<n;i++){
            if(w[i]>p)break;
            else if(p_+w[i]<=p)p_+=w[i];
            else{
                p_ = w[i];
                k_++;
            }
            if(k_>=k)break;
        }
        if(i==n)break;
    }
    printf("%d\n",p);
    return 0;
}

