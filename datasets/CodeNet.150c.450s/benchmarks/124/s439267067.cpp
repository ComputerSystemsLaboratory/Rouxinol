#include<iostream>
using namespace std;

#define N 100
#define MAX 100001
#define che cout<<"-----"<<endl

int cnt = 0;

class Po{
public:
    int i;
    int d;
    int o;
};

void change(Po *a, int i);
void maxHeapify(Po *a, int i);
void buildMaxHeap(Po *a, int n);

int main() {
    
    Po a[N][N];
    int n, u, k, c, v;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j].d = MAX;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cin>>u>>k;
        for(int j = 0; j < k; j++) {
            cin>>c>>v;
            a[u][c].d = v;
            a[u][c].i = c;
            a[u][c].o = u;
        }
    }
    
    int list[N];
//    for(int i = 0; i < n; i++) list[i] = MAX;
    list[0] = 0;
    Po q[100000], mini;
    for(int i = 1; i < n; i++) {
        if(a[0][i].d != MAX) {
            cnt++;
            q[cnt] = a[0][i];
            change(q, cnt);
        }
    }
    
    int num = 0;
    while(1) {
        mini = q[1];
        q[1] = q[cnt];
        cnt--;
        maxHeapify(q, 1);
        if(list[ mini.i ] == 0) {
            list[ mini.i ] = mini.d;
            for(int i = 1; i < n; i++) {
                if(a[mini.i][i].d != MAX) {
                    cnt++;
                    a[mini.i][i].d += mini.d;
                    q[cnt] = a[mini.i][i];
                    change(q, cnt);
                }
            }
            num++;
        }
        if(num == n-1) break;
    }
    
    for(int i = 0; i < n; i++) {
        cout<<i<<' '<<list[i]<<endl;
    }
    
    return 0;
}

void change(Po *a, int i) {
    int p = i % 2 == 0 ? i/2 : (i-1)/2;
    if(p >= 1 && a[i].d < a[p].d ) {
        Po tmp = a[i];
        a[i] = a[p];
        a[p] = tmp;
        change(a, p);
    }
}

void maxHeapify(Po *a, int i) {

  int l = i*2;
  int r = i*2+1;

  int largest = i;
  if(l <= cnt && a[l].d < a[largest].d )  largest = l;

  if(r <= cnt && a[r].d < a[largest].d ) largest = r;

  if(largest != i) {
    Po s = a[i];
    a[i] = a[largest];
    a[largest] = s;
    maxHeapify(a, largest);
  }
}

