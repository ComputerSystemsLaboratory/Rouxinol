#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

long long int connect(long long int a[], long long int b, long long int m, long long int e){
    long long int s = b;
    long long int i = b;
    long long int j = m + 1;
    long long int cnt = 0;
    long long int tmpa[200000];


    while (i <= m && j <= e){
        if(a[i] <= a[j]){
            tmpa[s++] = a[i++];
        }
        else{
            tmpa[s++] = a[j++];
            cnt += (m - i + 1);
        }
    }
    if(i > m){
        while(j <= e){
            tmpa[s++] = a[j++]; 
        }
    }
    if(j > e){
        while(i <= m){
            tmpa[s++] = a[i++]; 
        }
    }

    for (long long int k = b; k <= e; k++){
        a[k] = tmpa[k];
    }
    
    return cnt;
}

long long int merge(long long int a[],long long  int b, long long int e){
    if(b == e){
        return 0;
    }

    long long int m = (b + e) / 2;
    long long int cnt = 0;
    if(b + 1 , e){
        cnt += merge(a, b, m);
        cnt += merge(a, m + 1, e);
    }
    cnt += connect(a, b, m, e);
    return cnt;
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int cnt = 0;
    long long int a[n];
    for (long long int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }

    cnt = merge(a, 0, n - 1);

    printf("%lld\n", cnt);


    return 0;
  
    
}
