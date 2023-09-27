#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n;    cin>>n;
        if(n==0)break;

        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        int max=0,min=1000;;

        for(int i=0;i<n;i++){
            if(s[i]>max)max=s[i];
            if(s[i]<min)min=s[i];
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=s [i];
        }


        sum -=max;
        sum -=min;

        cout<<sum/(n-2)<<endl;
    }

    return 0;
}

