#include <cstdio>
#include <algorithm>
#include <list>
using namespace std;



int main(){
    list<int> dlist;
    int n,key,flag = 0;
    char command[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",&command,&key);      
        if(command[0] == 'i'){
            dlist.push_front(key);
        }else if(command[0] == 'd'){
            if(command[6] == 'F'){
                dlist.pop_front();
            }else if(command[6] == 'L'){
                dlist.pop_back();
            }else{
                for(list<int>::iterator it = dlist.begin();it != dlist.end();it++){
                    if(*it == key){
                        dlist.erase(it);
                        break;
                    }
                }
            }
        }
    }

    for(list<int>::iterator it = dlist.begin();it != dlist.end();it++){
        if(flag!=0) printf(" ");
        printf("%d", *it);
        flag = 1;  
    }
    printf("\n");
}