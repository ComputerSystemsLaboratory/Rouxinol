#include <iostream>
using namespace std;
int main(){
        int N;
        int heap[250];
        cin >> N;
        for(int i=1 ; i<=N ; i++ )
                cin >> heap[i];
        for(int i=1 ; i<=N ; i++ ){
                int left=i*2;
                int right=i*2+1;
                int parent=i/2;
                cout<<"node "<<i<<": key = "<<heap[i];
                if(i!=1)
                        cout<<", parent key = "<<heap[parent];
                if(left<=N)
                        cout<<", left key = "<<heap[left];
                if(right<=N)
                        cout<<", right key = "<<heap[right];
                cout<<", "<<endl;
        }
}
