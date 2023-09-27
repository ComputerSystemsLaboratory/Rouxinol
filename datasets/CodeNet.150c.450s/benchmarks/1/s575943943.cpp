#include<stdio.h>
int a[100000];
int ans[100000];
int main(){
int n;
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
int top=1;
ans[1]=a[1];
for (int i=2;i<=n;i++){
    if(ans[top]<a[i])
        ans[++top]=a[i];
    else{
        int mid;
        int left=1;
        int right=top;
        while(left<=right){
            mid=(left+right)/2;
            if(a[i]>ans[mid])
                left=mid+1;
            else right=mid-1;
        }
        ans[left]=a[i];
    }
}printf("%d\n",top);
return 0;
}