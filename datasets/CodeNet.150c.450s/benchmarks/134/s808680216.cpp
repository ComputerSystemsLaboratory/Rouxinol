#include    <bits/stdc++.h>
using   namespace   std;

#define Rep0(i, n)  for (int i=0; i<n; i++)
#define Sort(P) sort(P.begin(), P.end())

void    Pre(const int &I, const vector<vector<int>> &A, vector<int> &l) {
    l.push_back(I);
    if (-1!=A.at(I).at(1))
        Pre(A.at(I).at(1), A, l);
    if (-1!=A.at(I).at(2))
        Pre(A.at(I).at(2), A, l);
}

void    In(const int &I, const vector<vector<int>> &A, vector<int> &l) {
    if (-1!=A.at(I).at(1))
        In(A.at(I).at(1), A, l);
    l.push_back(I);
    if (-1!=A.at(I).at(2))
        In(A.at(I).at(2), A, l);
}

void    Post(const int &I, const vector<vector<int>> &A, vector<int> &l) {
    if (-1!=A.at(I).at(1))
        Post(A.at(I).at(1), A, l);
    if (-1!=A.at(I).at(2))
        Post(A.at(I).at(2), A, l);
    l.push_back(I);
}

int     main() {
        int n;
        cin >>n;
        vector<vector<int>> A(n, vector<int> (3, 0));
        vector<bool> P(n, true);
        Rep0(i, n) {
                int N;
                cin >>N;
                for (int j=1; j<=2; j++) {
                        cin >>A.at(N).at(j);
                        if (0<=A.at(N).at(j))
                                P.at(A.at(N).at(j))=false;
                }
        }
        int B=0;
        Rep0(i, n)
                if (P.at(i))
                        B=i;
        vector<int> l;
        cout <<"Preorder" <<endl;
        l.erase(l.begin(), l.end());
        Pre(B, A, l);
        Rep0(i, n)
                cout <<' ' <<l.at(i);
        cout <<endl;
        cout <<"Inorder" <<endl;
        l.erase(l.begin(), l.end());
        In(B, A, l);
        Rep0(i, n)
                cout <<' ' <<l.at(i);
        cout <<endl;
        cout <<"Postorder" <<endl;
        l.erase(l.begin(), l.end());
        Post(B, A, l);
        Rep0(i, n)
                cout <<' ' <<l.at(i);
        cout <<endl;
        return 0;
}

