#include<iostream>
#include<string>
using namespace std;

void swap(string& a,string& b){
    string t=a;
    a=b;
    b=t;
}

void Bubble(string* array,int n){
    for(int i=0;i<n;++i){
        for(int j=n-1;j>i;--j){
            if(array[j][1]<array[j-1][1]){
                swap(array[j],array[j-1]);
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<array[i];
        if(i!=n-1){cout<<" ";}
    }
    cout<<"\n";
}

void Select(string* array,int n){
    for(int i=0;i<n;++i){
        int min=i;
        for(int j=i;j<n;++j){
            if(array[j][1]<array[min][1]){min=j;}
        }
        swap(array[i],array[min]);
    }
    for(int i=0;i<n;++i){
        cout<<array[i];
        if(i!=n-1){cout<<" ";}
    }
    cout<<"\n";
}

void IsStable(string* array,string* original,int n){
    bool yes_or_no=true;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=0;k<n;++k){
                for(int l=k+1;l<n;++l){
                    if(original[i][1]==original[j][1] && array[l]==original[i] && array[k]==original[j]){
                        yes_or_no=false;
                    }
                }
            }
        }
    }
    if(yes_or_no) cout<<"Stable\n";
    else cout<<"Not stable\n";
}

int main(){
    int n;
    cin>>n;
    string* array=new string[n];
    for(int i=0;i<n;++i){
        cin>>array[i];
    }
    string* array2=new string[n];
    for(int i=0;i<n;++i){
        array2[i]=array[i];
    }
    string* original=new string[n];
    for(int i=0;i<n;++i){
        original[i]=array[i];
    }
    Bubble(array,n);
    IsStable(array,original,n);
    Select(array2,n);
    IsStable(array2,original,n);
}