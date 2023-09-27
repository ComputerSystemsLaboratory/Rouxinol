#include<iostream>
#include<vector>
using namespace std;

int parent(int i){return i/2;}
int left(int i){return i*2;}
int right(int i){return i*2+1;}

int main(){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<n+1;i++) cin>>a[i];
        for(int i=1;i<n+1;i++){
                cout<<"node "<<i<<": key = "<<a[i]<<", ";
                if(i!=1) cout<<"parent key = "<<a[parent(i)]<<", ";
                if(left(i)<n+1) cout<<"left key = "<<a[left(i)]<<", ";
                if(right(i)<n+1) cout<<"right key = "<<a[right(i)]<<", ";
                cout<<endl;
        }
        return 0;
}
