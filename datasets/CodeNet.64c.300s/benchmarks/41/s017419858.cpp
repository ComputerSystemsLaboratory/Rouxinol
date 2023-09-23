# include<iostream>
using namespace std;

int H, A[2000000];

void Maxheapify(int i) {
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;
    if (l <= H && A[l] > A[i])  largest = l;
    if (r <= H && A[r] > A[largest])  largest = r;
    if (largest != i) {
        swap(A[i], A[largest]);
        Maxheapify(largest);
    }
}

int main() {
    cin >> H;
    for (int i=1; i<=H; i++)  cin >> A[i];
    for (int i=H/2; i>=1; i--)  Maxheapify(i);
    for (int i=1; i<=H; i++)  cout << " " << A[i];
    cout << endl;
    return 0;
}
