#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n;  cin>>n;
        if(n==0)break;
        int score[n];   for(int i=0;i<n;i++)cin>>score[i];

        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=i;j<n;j++){
                int minj=i;
                if(score[i]>score[j]){
                    minj=j;
                    flag=true;
                }
                if(flag==true)swap(score[i],score[minj]);
            }
        }

        //for(int i=0;i<n;i++)cout<<score[i]<<" ";
        int min=1000000;

        for(int i=0;i<n-1;i++){
            if(min>abs(score[i]-score[i+1]))min=abs(score[i]-score[i+1]);

        }
        cout<<min<<endl;
    }


    return 0;
}

