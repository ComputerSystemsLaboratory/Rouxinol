#include<iostream>
using namespace std;
int prime(long int n);

int main(){
        long int n;
        long int num;
        long int count=0;
        long int i;
        cin>>n;
        for(i=0;i<n;i++){

                cin>>num;
                if(prime(num)==1){
                        count++;
                }
        }
        cout<<count<<endl;
        return 0;
     
}

int prime(long int n){
        long int i;
        long int sqrt;
        if(n==2)return 1;
        for(i=1;i<n;i++){
                if(n<i*i){
                        sqrt=i;
                        break;
                }
        }
        for(i=2;i<=sqrt;i++){
                if(n%i==0){
                        return 0;
                }
        }
        return 1;
}