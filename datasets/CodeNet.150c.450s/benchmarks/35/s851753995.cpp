#include<cstdio>
int main()
{
    int n,a[5000];
    while(scanf("%d",&n),n)
    {
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n-1;i++)a[i+1]+=a[i];

        int ma=-100000000;

        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                int sum;
                if(l==0)sum=a[r];
                else sum=a[r]-a[l-1];
                if(ma<sum)ma=sum;
            }
        }

        printf("%d\n",ma);
    }
    return 0;
}