#include<bits/stdc++.h>
using namespace std;
int arr[10001];
int main()
{
    int cs=0;

    {
        int n;
       scanf("%d",&n);


    memset(arr,0,sizeof(arr));

        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
        arr[a]++;

        }
        }

    int i=0;
        for( i=0;i<10001;i++)
        {
            if(arr[i]>0){

           printf("%d",i);
           arr[i]--;

           break;
            }



        }
 for(int j=0;j<10001;j++)
        {
            if(arr[j]>0){
                    for(int k=1;k<=arr[j];k++)
           printf(" %d",j);
            }



        }


printf("\n");




    }