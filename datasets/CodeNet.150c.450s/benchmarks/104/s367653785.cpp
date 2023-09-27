#include <iostream>
#include <vector>
using namespace std;

int main(){
    int w;
    int n;

    int a1, a2;
    int tmp;


    cin >> w >> n;

    vector<int> a(w);

    for(int i=0; i<w; i++){
        a[i] = i+1;
    }

    for(int i=1; i<=n; i++){
        scanf("%d,%d", &a1, &a2);
        tmp = a[a1-1];
        a[a1-1] = a[a2-1];
        a[a2-1] = tmp;
    }

    for(int i=0; i<w; i++){
        cout << a[i] << endl;
    }

    return 0;
}