//
//  main.cpp
//  kazane
//
//  Created by h3036136 on 2017/07/27.
//  Copyright ?? 2017??´ h3036136. All rights reserved.
#include <iostream>
#include <string>
using namespace std;
int main(){
    long saidai=0;
    int a=0,cnt=0,num=0,max=0,t;
    string str,tango[1000]={""},answer,ans;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            for(int j=a;j<i;j++){
                tango[cnt]+=str[j];
            }
            cnt=cnt+1;
            a=i+1;
        }
    }
    for(int p=a;p<str.size();p++){
        tango[cnt]+=str[p];
    }
    
    
    
    for(int k=0;k<=cnt;k++){
        if(saidai<tango[k].size()){
            saidai=tango[k].size();
            ans=tango[k];
        }
    }
    
    for(int s=0;s<cnt;s++){
        num=1;
        for(t=s+1;t<=cnt;t++){
            if(tango[s]==tango[t]){
                num=num+1;
            }
        }
        if(max<num){
            max=num;
            answer=tango[s];
        }
    }
    cout<<answer<<" "<<ans<<endl;
    return 0;
}