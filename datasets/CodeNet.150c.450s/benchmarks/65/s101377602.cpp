#include <iostream>

using namespace std;

const int MAX_N=36;

struct Card{
    char type;
    int value;
};

void bubbleSort(Card *,int);
void selectionSort(Card *,int);

int main(){
    Card bubbleC[MAX_N],selectionC[MAX_N];
    int n;
    cin>>n;
    int i;
    for (i=0;i<n;i++){
        char temp[3];
        cin>>temp;
        bubbleC[i].type=temp[0];
        bubbleC[i].value=(int)(temp[1]-'0');
        selectionC[i].type=temp[0];
        selectionC[i].value=(int)(temp[1]-'0');
    }
    //BubbleSort
    bubbleSort(bubbleC,n);
    //SelectionSort
    selectionSort(selectionC,n);
    for (i=0;i<n;i++){
        cout<<bubbleC[i].type<<bubbleC[i].value;
        if (i!=n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    cout<<"Stable"<<endl;
    for (i=0;i<n;i++){
        cout<<selectionC[i].type<<selectionC[i].value;
        if (i!=n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    for (i=0;i<n;i++){
        if (bubbleC[i].type!=selectionC[i].type || bubbleC[i].value!=selectionC[i].value)
            break;
    }
    if (i<n){
        cout<<"Not stable"<<endl;
    }
    else
        cout<<"Stable"<<endl;
    return 0;
}

void bubbleSort(Card *c,int n){
    for (int i=0;i<n;i++){
        for (int j=n-1;j>=i+1;j--){
            if (c[j].value<c[j-1].value){
                Card temp(c[j]);
                c[j]=c[j-1];
                c[j-1]=temp;
            }
        }
    }
}

void selectionSort(Card *c,int n){
    for (int i=0;i<n;i++){
        int mini=i;
        for (int j=i;j<n;j++){
            if (c[j].value<c[mini].value){
                mini=j;
            }
        }
        Card temp(c[mini]);
        c[mini]=c[i];
        c[i]=temp;
    }
}