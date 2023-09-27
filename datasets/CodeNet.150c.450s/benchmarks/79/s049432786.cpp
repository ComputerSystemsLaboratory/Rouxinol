#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    while(true){
        int n,r;
        cin >> n >> r;
        if(n==0)break;
        vector<int> card(n);
        for(int i=0;i<n;i++){
            card[i]=i+1;
        }
        for(int i=0;i<r;i++){
            int p,c;
            cin >> p >> c;
            int pos=n-p-c+1;
            queue<int> temp;
            for(int j=0;j<c;j++){
                temp.push(card[pos]);
                card.erase(card.begin()+pos);
            }
            while(!temp.empty()){
                card.push_back(temp.front());
                temp.pop();
            }
        }
        cout << card[n-1] << endl;
    }
    return 0;
}

                