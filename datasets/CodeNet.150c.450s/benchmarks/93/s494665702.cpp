#include <iostream>
#include <sstream>
#include <vector>

struct Card{
    char mark;
    int id;
    int pos;
};

void swap(Card& a, Card& b)
{
    Card tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int partition(std::vector<Card>& A, int p, int r)
{
    int x = A[r].id;
    int i = p - 1;
    for(int j = p; j < r; j++){
	if(A[j].id <= x){
	    i = i + 1;
	    swap(A[i], A[j]);
	}
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

void quicksort(std::vector<Card>& A, int p, int r){
    if(p < r){
	int q = partition(A, p, r);
	quicksort(A, p, q-1);
	quicksort(A, q+1, r);
    }
}

int main(int argc, char **argv)
{
    int n;
    std::cin >> n;

    std::vector<Card> A(n);
    for(int i = 0; i < n; i++){
	std::cin >> A[i].mark;
	std::cin >> A[i].id;
	A[i].pos = i;
    }
    quicksort(A, 0, n-1);

    std::stringstream ss;
    bool flag = true;
    Card prev;
    for(int i = 0; i < n; i++){
	ss << A[i].mark << " " << A[i].id << std::endl;
	if(i > 0 && prev.id == A[i].id && prev.pos > A[i].pos) flag = false;
	prev = A[i];
    }
    if(flag){
	std::cout << "Stable" << std::endl;
    }else{
	std::cout << "Not stable" << std::endl;
    }
    std::cout << ss.str();
}

