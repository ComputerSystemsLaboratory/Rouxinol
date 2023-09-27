#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000000007

struct Card {
    char name;
    int number;
};

int partition(vector<Card> &array, int p, int r)
{
    Card v = array[r];
    int i = p - 1;
    int j = p;
    for (int j = p; j < r; j++)
    {
        if (array[j].number <= v.number)
        {
            i++;
            Card t = array[i];
            array[i] = array[j];
            array[j] = t;
        }
    }
    i++;
    Card t = array[i];
    array[i] = v;
    array[r] = t;
    return i;
}

void quickSort(vector<Card>& array,int p, int r) {
    if(p < r) {
        int q = partition(array, p, r);
        quickSort(array, p, q-1);
        quickSort(array, q+1, r);
    }
}

void merge(vector<Card>& array, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<Card> array1, array2;
    for(int i=0; i<n1; i++) {
        array1.push_back(array[left + i]);
    }
    Card maxCard = {'x', MAX};
    array1.push_back(maxCard);
    for(int i=0; i<n2; i++) {
        array2.push_back(array[mid+i]);
    }
    array2.push_back(maxCard);
    int c1 =0, c2 = 0;
    for(int i=0; i<n1+n2; i++) {
        if(array1[c1].number <= array2[c2].number) {
            array[left + i] = array1[c1];
            c1++;
        } else {
            array[left + i] = array2[c2];
            c2++;
        }
    }
}

void mergeSort(vector<Card> &array, int left, int right) {
    if(left+1<right) {
        int mid = (left+right)/2;
        mergeSort(array, left, mid);
        mergeSort(array, mid, right);
        merge(array, left, mid, right);
    }
}
int main() {
    int num;
    cin >> num;
    vector<Card> cardSet;  
    vector<Card> cardSetForMerge;  
    for(int i=0; i<num; i++) {
        char c;
        int n;
        cin >> c >> n;
        Card card = {c,n};
        cardSet.push_back(card);
        cardSetForMerge.push_back(card);
    }

    quickSort(cardSet, 0, num-1);
    mergeSort(cardSetForMerge, 0, num);

    int index = 0;
    for(; index<num; index++) {
        if(cardSet[index].name != cardSetForMerge[index].name) {
            cout << "Not stable" << endl;
            break;
        }
    }
    if(index == num) {
        cout << "Stable" << endl;
    }

    for(int i=0; i<num; i++) {
        cout << cardSet[i].name << " " << cardSet[i].number << endl;
    }
}

