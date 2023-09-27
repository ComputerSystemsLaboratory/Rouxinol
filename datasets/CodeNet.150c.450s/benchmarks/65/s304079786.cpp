#include<iostream>
#include<string>
using namespace std;

void bubblesort(int *a, char*b, int n){
        for(int i=0;i<n;i++){
                for(int j=n-1;j>0;j--){
                        if(a[j]<a[j-1]) {
                                swap(a[j],a[j-1]);
                                swap(b[j],b[j-1]);
                        }
                }
        }
}
void selectsort(int *a, char *b, int n){
        int mini;
        for(int i=0;i<n-1;i++){
                mini = i;
                for(int j=i+1;j<n;j++){
                        if(a[j]<a[mini]) {
                                mini = j;
                        }
                }
                if(mini!=i){
                        swap(a[mini],a[i]);
                        swap(b[mini],b[i]);
                }
        }
}

int main(){
        int n;
        string s;
        int bubblea[100];
        char bubbleb[100];
        int selecta[100];
        char selectb[100];
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>s;
                bubblea[i] = s[1]-'0';
                bubbleb[i] = s[0];
                selecta[i] = s[1]-'0';
                selectb[i] = s[0];
        }
        bubblesort(bubblea, bubbleb, n);
        selectsort(selecta, selectb, n);

        for(int i=0;i<n;i++){
                cout<<bubbleb[i]<<bubblea[i];
                if(i==n-1) cout<<endl;
                else cout<<" ";
        }
        cout<<"Stable"<<endl;

        for(int i=0;i<n;i++){
                cout<<selectb[i]<<selecta[i];
                if(i==n-1) cout<<endl;
                else cout<<" ";
        }
        bool stable = true;
        for(int i=0;i<n;i++)
                if(bubbleb[i]!=selectb[i]){
                        stable = false;
                        break;
                }
        if(stable)cout<<"Stable"<<endl;
        else cout<<"Not stable"<<endl;

        return 0;
}



