#include<iostream>
#include<strings.h>
using namespace std;
int main(){
    int n;
    string f[150];
    while(1){
        int left=0,right=0;
        int count = 0,flag =0;
        cin >> n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin >> f[i];
        }
        for(int i=0;i<n;i++){
            
            if(flag==0){
                if(f[i]=="lu"){
                    left = 1;
                }else if(f[i]=="ru"){
                    right = 1;
                }else if(f[i]=="ld"){
                    left = 0;
                }else if(f[i]=="rd"){
                    right = 0;
                }
            }else if(flag ==1){
                if(f[i]=="lu"){
                    left = 0;
                }else if(f[i]=="ru"){
                    right = 0;
                }else if(f[i]=="ld"){
                    left = 1;
                }else if(f[i]=="rd"){
                    right = 1;
                }
            }
            if(i>=1&&right==1&&left==1){
                count++;
                right=0;
                left=0;
                if(flag==0){
                    flag = 1;
                }else{
                    flag = 0;
                }
            }
        }
        cout << count <<endl;
    }
    return 0;
}
