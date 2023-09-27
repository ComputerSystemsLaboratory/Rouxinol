#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <list>
#include <stdio.h>

using namespace std;





int main(){
    int a[21]={0},l;
    while(cin>>a[0]>>l){
        if(a[0]==0&&l==0)break;
        
        int arr[l];
        int now=0;
        while(1){
            int flag=0;
            int temp = a[now];
            for(int i=l-1; i>=0; i--){
                arr[i]=temp%10;
                temp/=10;
            }
            
            sort(arr, arr+l);
            
            int max=0;
            int min=0;
            for(int i=0; i<l; i++){
                min*=10;
                max*=10;
                min+=arr[i];
                max+=arr[l-1-i];
            }
            temp= max-min;
            now++;
            a[now]=temp;
            //cout<<now<<" "<<a[now]<<endl;

            for(int i=0; i<now; i++){
                if(a[i]==a[now]){
                    cout<<i<<" "<<a[i]<<" "<<now-i<<endl;
                    flag++;
                    break;
                }
            }
            if(flag!=0)break;
            
        }
        
        
        //        for(int i=0; i<l; i++){
        //            cout<<a[i];
        //        }
        
        
    }
    
}