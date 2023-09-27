#include<iostream>
using namespace std;
int main(){
    while(1){
        int stone[50]={},p,n,flag,winer=-1;
        cin >> n >> p;
        if(n==0&&p==0)  break;
        while(winer<0){
            for(int i=0;i<n;i++){
                flag = 0;
                for(int j=0;j<n;j++){
                    if(stone[j]!=0&&j!=i){
                        flag=1;
                        break;
                    }
                }
                
                if(p==1&&flag==0){
                    winer = i;
                    break;
                }
                else if(p==0) {
                    p+=stone[i];
                    stone[i]=0;
                }
                else{
                    p--;
                    stone[i]++;
                }
            }
        }
        cout << winer << "\n";
    }
}