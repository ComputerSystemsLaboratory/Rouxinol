#include<iostream>

using namespace std;
int cd[100];

int main(){

    while(1){
        int n, p;
        cin>> n>> p;
        if(n==0&&p==0) break;
        for(int i=0; i<n; i++) cd[i]=0;
        int turn=0;
        while(1){
            int c=0, ans;
            for(int i=0; i<n; i++){
                if(cd[i]!=0&&p==0){
                    ans=i;
                }else{
                    c++;
                }
            }
            if(c==n-1){
                cout<< ans<< endl;
                break;
            }
            if(p!=0){
                p--;
                cd[turn]++;
            }else{
                p+=cd[turn];
                cd[turn]=0;
            }
            turn=(turn+1)%n;
        }
    }

    return 0;
}