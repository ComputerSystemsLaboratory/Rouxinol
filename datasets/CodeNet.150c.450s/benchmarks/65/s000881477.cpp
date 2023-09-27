#include <iostream>
using namespace std;

struct Card{char suit;int value;};

int main(int argc, const char * argv[]) {
    //read
    int n;
    cin>>n;
    Card C1[n],C2[n];
    
    
    for(int i=0;i<n;i++){
        cin>>C1[i].suit>>C1[i].value;
    }
    for(int i = 0;i<n;i++){
        C2[i] = C1[i];
    }
    
    //bubble sort
    bool flag = true;
    while(flag){
        flag = false;
        for(int i = n-1;i>0;i--){
            if(C1[i].value<C1[i-1].value){
                Card tmp = C1[i];
                C1[i]=C1[i-1];
                C1[i-1]=tmp;
                flag = true;
            }
        }
    }
    cout<<C1[0].suit<<C1[0].value;
    for(int i = 1;i<n;i++){
        cout<<' '<<C1[i].suit<<C1[i].value;
    }
    cout<<endl;
    cout<<"Stable"<<endl;
    
    //selection sort
    for(int i=0;i<n;i++){
        int minj = i;
        for(int j=i;j<n;j++){
            if(C2[j].value<C2[minj].value){
                minj = j;
            }
        }
        if(C2[i].value!=C2[minj].value){
            Card tmp = C2[i];
            C2[i]=C2[minj];
            C2[minj]=tmp;
        }
    }
    //output
    cout<<C2[0].suit<<C2[0].value;
    for(int i = 1;i<n;i++){
        cout<<' '<<C2[i].suit<<C2[i].value;
    }
    cout<<endl;
    
    //isStable
    string isStable = "Stable";
    for(int i = 0;i<n;i++){
        if((C1[i].suit==C2[i].suit)&&(C1[i].value==C2[i].value)){
            continue;
        }else{
            isStable = "Not stable";
            break;
        }
    }
    cout<<isStable<<endl;
}