#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int x,y,s;  cin>>x>>y>>s;
        if(x==0)break;
        int max=0;
        int small=0;
        int big=0;

        for(int i=1;i<=s;i++){
            for(int j=s; j>=1;j--){
                if((i*(100+x)/100 + j*(100+x)/100) == s){
                    if((i*(100+y)/100 + j*(100+y)/100)>max){
                        max= i*(100+y)/100 + j*(100+y)/100;
                        small=i;
                        big=j;

//                        cout<<small<<":"<<big<<endl;
                    }
                }
            }
        }

//        cout<<"Small="<<small<<" : Big="<<big<<endl;
        cout<<small*(100+y)/100 + big*(100+y)/100<<endl;
    }

    return 0;

}

