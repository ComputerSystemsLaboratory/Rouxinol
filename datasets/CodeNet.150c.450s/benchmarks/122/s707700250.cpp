#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

// int MAX = 2000000;
// vector<int> s(MAX, -1);
// int n;

// void max_heapify(int i) {
//     int l = 2 * i, r = l + 1;
//     int largest = i;
//     if (r <= n) {
//         if (s[i] < max(s[l], s[r])) {
//             if (s[l] < s[r]) largest = r;
//             else largest = l;
//         }
//     } else if (l <= n) {
//         if (s[i] < s[l]) largest = l;
//     }
//     if (largest != i) {
//         swap(s[i], s[largest]);
//         max_heapify(largest);
//     }
// }

// void insert(int k) {
//     s[n] = k;
//     int i = n;
//     while (i > 0 && s[i] > s[i/2]) {
//         swap(s[i], s[i/2]);
//         i /= 2;
//     }
//     n++;
// }

// int extract() {
//     if (n == 0) return -1;
//     int max_v = s[0];
//     s[0] = s[n-1];
//     s[n-1] = -1;
//     n--;
//     max_heapify(0);
//     return max_v;
// }

int main() {
    priority_queue<int> pq;
    while (1) {
        string s;
        cin >> s;
        if (s == "insert") {
            int k;
            scanf("%d", &k);
            pq.push(k);
        } else if (s == "extract") {
            printf("%d\n", pq.top());
            pq.pop();
        } else if (s == "end") break;
    }
}
