#include<iostream>
using namespace std;
#define MAX 1000000

int key[MAX+1],n;

void maxheap(int i){
    int r,l,largest;
    l = 2*i;
    r = 2*i+1;
    if(l <= n&&key[l] > key[i])largest = l;
    else largest = i;
    if(r <= n&&key[r] > key[largest])largest = r;
    if(largest != i){
    swap(key[i],key[largest]);
        maxheap(largest);
    }
}
int main(){
    
    cin >> n;
    
    for(int i = 1;i <= n;i++)cin >> key[i];
    for(int i = n/2;i >= 1;i--)maxheap(i);
    for(int i = 1;i <= n;i++)cout << " " << key[i];
    cout << endl;
    
    return 0;
}
