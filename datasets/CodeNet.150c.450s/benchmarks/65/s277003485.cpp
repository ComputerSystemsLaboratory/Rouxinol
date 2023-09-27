#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Output(const vector<string>& List)
{
    for(std::size_t i = 0; i < List.size(); ++i){
        if(i) std::cout << " ";
        std::cout << List[i];
    }
    std::cout << std::endl;
}
int BubbleSort(vector<string> &A)
{
    int count = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = A.size()-1; j >= i+1; j--){
            if(A[j][1] < A[j-1][1]){
                swap(A[j], A[j-1]);
                count++;
            }
        }
    }
    return count;
}
int selectionSort(vector<string>& A){
    int count = 0;
    for(int i = 0; i < A.size(); i++){
        int minj = i;
        for(int j = i; j < A.size(); j++){
            if(A[j][1] < A[minj][1]){
                minj = j;
            }
        }
        count += i != minj;
        swap(A[i], A[minj]);
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<string> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<string> B = A;
    vector<string> S = A;
    BubbleSort(B);
    Output(B);
    cout << "Stable" << endl;
    selectionSort(S);
    Output(S);
    if(B == S){
        cout << "Stable" << endl;
    }else {
        cout << "Not stable" << endl;
    }
    return 0;
}