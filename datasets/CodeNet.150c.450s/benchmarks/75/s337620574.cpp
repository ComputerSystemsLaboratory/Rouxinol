#include<iostream>
#define LE(x) (2*(x))
#define RI(x) (2*(x)+1)
#define PA(x) ((x)/2)
using namespace std;
const int N_MAX = 500005;
int H[N_MAX];
int n;

/*void test(int flag){
    cout<<"///////////NOW TEST//////////"<<endl;
    for(int i=1;i<=n;i++){
        cout<<H[i]<<' ';
    }
    cout<<endl<<"///////////flag = "<<flag<<"//////////"<<endl;
    getchar();
}*/

void maxHeapify(int flag){
    if(flag>PA(n)){
        return;
    }
    int l = LE(flag);
    int r = RI(flag);
    if(r<=n){
        if(H[r]>H[l]){
            if(H[r]>H[flag]){
                H[r]^=H[flag];
                H[flag]^=H[r];
                H[r]^=H[flag];
                //test(flag);
                maxHeapify(r);
            }else{
                return;
            }
        }else{
            if(H[l]>H[flag]){
                H[l]^=H[flag];
                H[flag]^=H[l];
                H[l]^=H[flag];
                //test(flag);
                maxHeapify(l);
            }else{
                return;
            }
        }
    }else{
        if(H[l]>H[flag]){
                H[l]^=H[flag];
                H[flag]^=H[l];
                H[l]^=H[flag];
                //test(flag);
        }else{
            return;
        }
    }
}

void buildMaxHeap(){
    for(int i=PA(n); i>0; i--){
        maxHeapify(i);
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>H[i];
    }
    buildMaxHeap();
    for(int i=1;i<=n;i++){
        cout<<' '<<H[i];
    }
    cout<<endl;
    return 0;
}

