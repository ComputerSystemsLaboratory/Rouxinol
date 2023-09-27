#include <cstdio>
#define f(i,n)for(int i=0;i<n;i++)
#define s (scanf("%d",&e),e)
int main(){int a=0,w,n,m,b,e,d[99];f(i,99)d[i]=0;n=s;m=s;if(n==0)return 0;f(i,m){w=b=0;f(j,n){s;if(e)f(k,3){e=d[j+k];if(e&&e-w){if(w){f(l,n+2)d[l]=d[l]==e?w:d[l];a--;}else w=e;}if(w==0)a++,w=i*n+j+1;}else w=0;d[j]=b;b=w;}d[n]=b;}printf("%d\n",a);main();}