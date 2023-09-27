#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,x;
    cin>>n;
    int arr[n+1];
    memset(arr,0,(n+1)*sizeof(int));
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){ // with these 3 for loops you try all possible combinations
                x=i*i+j*j+k*k+i*j+j*k+i*k;
                if(x>n) // if you reach a number > n then you need to change y i.e j
                    break;
                else // if the number is included in the range then increase the values of it's index in the array
                    arr[x]++; 
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<arr[i]<<endl;
    return 0;
}