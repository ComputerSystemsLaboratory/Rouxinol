#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
void bubble_sort(struct Card *card,int n);
void selection_sort(struct Card *card,int n);
struct Card{ 
        char name[2];
        int num;
        int jun;
};

int main(){
        int n;
        int i;
        int yn=0;
        Card card[36];
        Card bubble[36];
        Card selection[36];
        cin>>n;
        for(i=0;i<n;i++){
                cin>>card[i].name[0];
                cin>>card[i].name[1];
                card[i].num=card[i].name[1]-0x30;
                card[i].jun=i;
        }
        for(i=0;i<n;i++){
                bubble[i]=card[i];
                selection[i]=card[i];
        }
        bubble_sort(bubble,n);
        selection_sort(selection,n);
        for(i=0;i<n;i++){
                cout<<bubble[i].name[0]<<bubble[i].num;
                if((i<n-1)&&(bubble[i].num==bubble[i+1].num)){
                        if(bubble[i].jun>bubble[i+1].jun){
                                yn=1;
                        }
                }
                if(i<n-1){
                        cout<<" ";
                }else{
                        cout<<endl;
                }
        }
        if(yn==0){
                cout<<"Stable\n";
        }else{
                cout<<"Not stable\n";
        }
        yn=0;
        for(i=0;i<n;i++){
                cout<<selection[i].name[0]<<selection[i].num;
                if((i<n-1)&&(selection[i].num==selection[i+1].num)){
                        if(selection[i].jun>selection[i+1].jun){
                                yn=1;
                        }
                }
                if(i<n-1){
                        cout<<" ";
                }else{
                        cout<<endl;
                }
        }
        if(yn==0){
                cout<<"Stable\n";
        }else{
                cout<<"Not stable\n";
        }
        return 0;
}

void bubble_sort(struct Card *card,int n){
        int i,j;
        int a,b;
        Card tmp;
        for(i=0;i<n-1;i++){
                for(j=n-1;j>i;j--){
                        a=j;
                        b=j-1;
                        if(card[b].num>card[a].num){
                                tmp=card[b];
                                card[b]=card[a];
                                card[a]=tmp;
                        }
                }
        }

}

void selection_sort(struct Card *card,int n){
        int i,j;
        int minj;
        Card tmp;
        for(i=0;i<n;i++){
                minj=i;
                for(j=i;j<n;j++){
                        if(card[j].num<card[minj].num){
                                minj=j;
                        }
                }
                tmp=card[i];
                card[i]=card[minj];
                card[minj]=tmp;
        }
}