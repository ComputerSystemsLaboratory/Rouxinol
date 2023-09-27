#include <cstdio>

int main(){
    int i, n, k, p;
    scanf("%d %d",&n,&k);
    int w[n];
    int tmp1 = 0;
    int tmp2 = 0;
    int sum = 0;
    for(i=0;i<n;i++){
        scanf("%d",w+i);
        sum += w[i];
        if(w[i]>tmp1)tmp1=w[i];
    }
    tmp2 = sum / k;
    if(sum%k)tmp2++;
    if(tmp1>tmp2)p=tmp1;
    else p = tmp2;
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

