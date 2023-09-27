#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Card
{
    char first;
    int second;
};

void out(std::vector<struct Card>& a, int p, int r)
{
    for(int i=p; i<r; i++){
        cout << a[i].first << " " << a[i].second << endl;;
    }
}

int partition(std::vector<struct Card>& a, int p, int r)
{
    //out(a, 0, a.size());
    int x = a[r].second;
    int i = p-1;
    for(int j=p; j<r; j++){
        if(a[j].second <= x){
            i++;
            struct Card tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    struct Card tmp = a[i+1];
    a[i+1] = a[r];
    a[r] = tmp;
    return i+1;
}

void quicksort(std::vector<struct Card>& a, int p, int r)
{
    //out(a, 0, a.size());
    if(p >= r) return;
    int q = partition(a, p, r);
    quicksort(a, p, q-1);
    quicksort(a, q+1, r);
}

bool isStable(std::vector<struct Card>& org, std::vector<struct Card>& sorted)
{
    std::map<int, std::string> m1, m2;
    for(int i=0; i<org.size(); i++){
        m1[org[i].second] += org[i].first;
        m2[sorted[i].second] += sorted[i].first;
    }
    std::map<int, std::string>::iterator itr1 = m1.begin();
    std::map<int, std::string>::iterator itr2 = m2.begin();
    while(itr1 != m1.end()){
        if(itr1->second != itr2->second) return false;
         ++itr1; ++itr2;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    std::vector<struct Card> a;
    for(int i=0; i<n; i++){
        struct Card card;
        cin >> card.first >> card.second;
        a.push_back(card);
    }
    std::vector<struct Card> org(a.size());
    std::copy(a.begin(), a.end(), org.begin());
    quicksort(a, 0, n-1);

    if(isStable(org, a) == true){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    out(a, 0, n);
}

