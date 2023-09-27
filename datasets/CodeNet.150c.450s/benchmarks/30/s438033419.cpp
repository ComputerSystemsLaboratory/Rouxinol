#include<iostream>

using namespace std;

int Selection_sort(int dat[],int size){
    int min,count=0;
    for(int i=0;i<size;++i){
        min=i;
        for(int j=i;j<size;++j){
            if(dat[j]<dat[min]) min=j;
        }
        if(min!=i) ++count;
       swap(dat[i],dat[min]);
    }
    return count;
}


int main(){
    const int max=100;
    int size,dat[max],count;
    cin >> size;
    for(int i=0;i<size;++i){
        cin >> dat[i];
    }
    count=Selection_sort(dat,size);
    for(int i=0;i<size;++i){
        if(i)cout<<" ";
        cout<<dat[i];
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}