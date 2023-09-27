#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

static const int MAX = 2000000;

int left(int i){ return (i+1)*2 -1; }
int right(int i){ return (i+1)*2+1 -1; }
int parent(int i){ return (i+1)/2 -1; }

int n;

void maxHeapify(int *a, int i){
        int l = left(i);
        int r = right(i);
        int largest;
        if(l<n && a[l]>a[i]) largest = l;
        else largest = i;
        if(r<n && a[r]>a[largest]) largest = r;

        if(largest!=i){
                swap(a[i],a[largest]);
                maxHeapify(a,largest);
        }
}

void heapIncreaseKey(int *a, int i){
        if(i==0) return;
        int j = i;
        while(a[j]>a[parent(j)]){
                swap(a[j], a[parent(j)]);
                j = parent(j);
                if(j<=0) break;
        }
}

void insert(int *a, int v){
        a[n] = v;
        heapIncreaseKey(a, n);
        n++;
}

int extract(int *a){
        int r = a[0];
        a[0] = a[n-1];
        n--;
        maxHeapify(a,0);
        return r;
}

int main(){
        int a[MAX];
        string s;
        int v;
        n=0;
        while(1){
                cin>>s;
                if(s=="end") break;
                else if(s=="insert"){
                        cin>>v;
                        insert(a,v);
                }else if(s=="extract"){
                        v = extract(a);
                        cout<<v<<endl;
                }
        }
        return 0;
}

