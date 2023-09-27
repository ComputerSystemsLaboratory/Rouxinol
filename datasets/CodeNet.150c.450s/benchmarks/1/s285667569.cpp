#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100000+1];
int l[100000+1];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    l[0]=a[0];
    int chang=1;
    for (int i=1;i<n;i++)
    {
        if(l[chang-1]<a[i]){
            l[chang++]=a[i];

        }else{
        *lower_bound(l,chang+l,a[i])=a[i];
        }
    }
    printf("%d\n",chang);
    return 0;
}