#include<iostream>
using namespace std;
#include<string.h>
#define MAX 1000000

int A[MAX], head = 0, tail = 0;

void insert(int x) {
        A[tail] = x;
        tail++;
}

void dlt(int x) {
        int a, b = 0, i;
        for(i = tail - 1; i >= head; i--) {
                if(x == A[i]) {
                        a = i; b = 1; break;
                }
        }
        if(b == 1) {
                for(int j = i; j < tail; j++) A[j] = A[j+1];
                tail--;
        }
}

int main() {
        int n, c;
        string str;
        cin >> n;
        for(int i = 0; i < n; i++) {
                cin >> str;
                if(str == "insert") {
                        cin >> c;
                        insert(c);
                }
                else if(str == "delete") {
                        cin >> c;
                        dlt(c);
                }
                else if(str == "deleteFirst") tail--;
                else head++;
        }
        for(int j = tail - 1; j >= head; j--) {
                if(j != tail - 1) cout << " ";
                cout << A[j];
        }
        cout << endl;
        return 0;
}