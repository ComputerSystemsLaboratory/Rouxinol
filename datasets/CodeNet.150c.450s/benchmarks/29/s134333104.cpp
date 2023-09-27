#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
struct Node{
        int value;
        Node *prev,*next;
};
Node *nil;
void insert(int x){
        Node *now;
        now=(Node *)malloc(sizeof(Node));
        now->value=x;
        now->prev=nil;
        now->next=nil->next;
        nil->next->prev=now;
        nil->next=now;
        return;
}void _delete(int x){
        Node *now=nil->next;
        while(now!=nil){
                if(now->value==x)break;
                now=now->next;
        }
        if(now->value!=x)return;
        now->next->prev=now->prev;
        now->prev->next=now->next;
        free(now);
        return;
}void first(){
        nil->next->next->prev=nil;
        nil->next=nil->next->next;
        return;
}void last(){
        nil->prev->prev->next=nil;
        nil->prev=nil->prev->prev;
        return;
}
int main(){
        nil=(Node*)malloc(sizeof(Node));
        nil->prev=nil->next=nil;
        int N,x;
        string str;
        cin >> N;
        for(int i=0 ; i<N ; i++ ){
                cin >> str;
                if(str=="deleteFirst"){
                        first();
                }else if(str=="deleteLast"){
                        last();
                }else{
                        cin >> x;
                        if(str=="insert"){
                                insert(x);
                        }else{
                                _delete(x);
                        }
                }
        }
        Node *now=nil->next;
        while(now!=nil){
                cout << now->value;
                now=now->next;
                if(now!=nil)cout<<" ";
        }
        cout << endl;
        return 0;
}
