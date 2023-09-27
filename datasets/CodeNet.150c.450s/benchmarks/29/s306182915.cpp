#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<stdio.h>
#include<stack>
#include<stdlib.h>
#include<list>
#define LEN 100005
using namespace std;
//list実装

int main(){
    list<int> l;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        if(c[0]=='i'){
            int a;
            scanf("%d",&a);
            l.push_front(a);
        }else{
            if(c[6]=='F'){
                l.pop_front();
            }else if(c[6]=='L'){
                l.pop_back();
            }else{
                int a;
                scanf("%d",&a);
                for(list<int>::iterator itr=l.begin();itr!=l.end();itr++){
                    if(*itr==a){
                        l.erase(itr);
                        break;
                    }
                }
                
            }
        }
    }
    int i=0;
    for(list<int>::iterator itr=l.begin();itr!=l.end();itr++){
            if(i++)cout<<" ";
        printf("%d",*itr);
            
        }
    cout<<endl;
        
return 0;
}
