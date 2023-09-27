#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> edge;
    int n,a,b,c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a>>b>>c;
        edge.push(a);
        edge.push(b);
        edge.push(c);
        a=edge.top();
        edge.pop();
        b=edge.top();
        edge.pop();
        c=edge.top();
        edge.pop();
        if(a*a==(b*b+c*c)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}