#include <iostream>
#include <cstdio>

using namespace std;

int truck[100000+10],A[100000+10];
int n,k,sum=0;

int check(int load,int k,int tot)
{
    int j=0;
    for(int i=0;i<k;i++)
    {
        truck[i]=0;
        while(j<n)
        {
          int temp=truck[i]+A[j];
          if(temp<=load)
          {
           truck[i]=temp;
           tot-=A[j];
           j++;
          }
          else break;
        }
    }
    if(tot>0) return 0; //说明k辆卡车无法装载所有货物
    else  return 1;//说明k辆卡能够装载所有货物
}

int Binary_sech(int left,int right)
{
    while(left+1<right)
    {
        int mid=(left+right)/2;
        if(check(mid,k,sum)) right=mid;//由于卡车无法装载所有货物，因此需要在更大范围内搜索P值
        else left=mid;//由于卡车能够装载所有货物，因此可以考虑在更小范围内进行搜索
    }
    return right;
}

int main()
{
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    int P=0;
    int res=Binary_sech(0,sum);
    printf("%d\n",res);
    return 0;
}

