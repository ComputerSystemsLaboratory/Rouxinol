/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C
 */
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void
printv(const vector<string> a)
{
    stringstream ss;
    for (auto it = a.cbegin(); it != a.cend(); it++) {
        if (it != a.begin()) {
            ss << ' ';
        }
        ss << *it;
    }
    cout << ss.str() << endl;
}

bool
cardcomp(const string a, const string b)
{
    return a.substr(1) < b.substr(1);
}

vector<string>
bubblesort(const vector<string> a)
{
    vector<string> work(a);

    bool flag = true;
    while (flag) {
        flag = false;
        for (auto it = work.rbegin(); it != work.rend() - 1; it++) {
            auto nit = next(it);
            if (cardcomp(*it, *nit)) {
                iter_swap(nit, it);
                flag = true;
            }
        }
    }
    return work;
}

vector<string>
selectionsort(const vector<string> a)
{
    vector<string> work(a);

    for (auto it1 = work.begin(); it1 != work.end(); it1++) {
        auto mini = it1;
        for (auto it2 = it1; it2 != work.end(); it2++) {
            if (cardcomp(*it2, *mini)) {
                mini = it2;
            }
        }
        if (it1 != mini) {
            iter_swap(it1, mini);
        }
    }
    return work;
}

void
checkstable(const vector<string> original, const vector<string> sorted)
{
    vector<string> work(original);
    stable_sort(work.begin(), work.end(), cardcomp);
    auto sit = sorted.begin();
    for (auto oit = work.begin(); oit != work.end(); oit++, sit++) {
        if (*oit != *sit) {
            cout << "Not stable" << endl;
            return;
        }
    }
    cout << "Stable" << endl;
}

int
main()
{
    int N;
    cin >> N; cin.ignore();

    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i]; cin.ignore();
    }

    vector<string> bubble = bubblesort(A);
    printv(bubble);
    checkstable(A, bubble);

    vector<string> selection = selectionsort(A);
    printv(selection);
    checkstable(A, selection);

    return 0;
}