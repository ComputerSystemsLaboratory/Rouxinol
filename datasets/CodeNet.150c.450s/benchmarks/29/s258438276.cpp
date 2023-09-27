#include <iostream>
#include<string>
#include<list>
#include<algorithm>
#include<cstdio>
using namespace std;


int main(){
    
    int n,t;
    scanf("%d",&n);
    list<int> V;
    string com;
    for(int i=0;i<n;i++){
        
        cin>>com;
        
        if(com[0]=='i'){
            scanf("%d",&t);
            V.push_front(t);
            
        }else if(com[6]=='F'){
                V.pop_front();
                //deleteLast
        }else if(com[6]=='L'){
                V.pop_back();
        }else if(com[0]=='d'){
                scanf("%d",&t);
                for(list<int>::iterator it = V.begin();it!=V.end();it++){
                    if(*it==t){
                        V.erase(it);
                        break;
                    }
                }
            }
    }
    int i=0;

    for(list<int>::iterator it = V.begin();it != V.end();it++){
       if(i++) printf(" ");
        printf("%d",*it);
        }
        
    
    printf("\n");




return 0;
}
