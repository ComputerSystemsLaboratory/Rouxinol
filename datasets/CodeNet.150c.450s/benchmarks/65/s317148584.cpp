#include<iostream>

using namespace std;

struct Card{
    char ch,val;
};

void Bubble_sort(Card dat[],int size){
    bool judge = 1;
    for (int i = 0; judge; ++i) {
        judge = 0;
        for (int j = size - 1; j >= i + 1; --j) {
            if (dat[j].val < dat[j - 1].val) {
                swap(dat[j], dat[j - 1]);
                judge = 1;
            }
        }
    }
    return;
}
void Selection_sort(Card dat[],int size){
    int min;
    for(int i=0;i<size;++i){
        min=i;
        for(int j=i;j<size;++j){
            if(dat[j].val<dat[min].val) min=j;
        }
        swap(dat[i],dat[min]);
    }
    return;
}

int is_Stable(Card dat1[],Card dat2[],int size){
        for(int i=0;i<size;++i){
        if(dat1[i].ch != dat2[i].ch) return 0;
    }
    return 1;
}

void print(Card dat1[],Card dat2[],int size){
    for(int i=0;i<size;++i){
        if(i) cout<<" ";
        cout<<dat1[i].ch<<dat1[i].val;
    }
    cout << endl;
    cout<<"Stable"<<endl;
    for(int i=0;i<size;++i){
        if(i) cout<<  " ";
        cout<<dat2[i].ch<<dat2[i].val;
    }
    cout<<endl;
    if(is_Stable(dat1,dat2,size))cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    return;
}
int main(){
    const int max=36;
    int size;
    Card C1[max],C2[max];
    cin >> size;
    for(int i=0;i<size;++i){
        cin >> C1[i].ch >> C1[i].val;
        C2[i].ch=C1[i].ch;
        C2[i].val=C1[i].val;
    }
    Bubble_sort(C1,size);
    Selection_sort(C2,size);
    print(C1,C2,size);
    return 0;
}