#include<iostream>

namespace Arrenged
{
class vector{
public:
	void push_back(int x);
	int  size();
	int& operator[](int n);
	vector();
	~vector();
//	vector(const vector& X);
private:
	int  Size;
	int* A;
};
	int& vector::operator[](int n)
	{
		return A[n];
	}
	
	vector::vector()
	{
		A = NULL;
		Size = 0;
	}
	
	vector::~vector()
	{
		if(A) delete[] A;
	}
	
// 	vector::vector(const vector& X)
// 	{
// 		Size = X.Size;
// 		A = new int[X.Size];
// 		for(int i = 0; i < X.Size; i++){
// 			A[i] = X.A[i];
// 		}
// 	}
	
	void vector::push_back(int x)
	{
		int* B = A;
		A = new int[Size+1];
		for(int i = 0; i < Size; i++){
			A[i] = B[i];
		}
		A[Size] = x;
		Size++;
		delete[] B;
	}
	
	int  vector::size()
	{
		return Size;
	}
	
}//Arrenged????????????

using namespace Arrenged;
void Sort(vector &A, int i){
    int j = i - 1;
    while(j >= 0 && A[j] > A[j+1]){
        int v = A[j+1];
        A[j+1] = A[j];
        A[j] = v;
        j--;
    }
}
 
int main(){
    int N;
    std::cin >> N;
    vector A;
    for(int i = 0; i < N; i++){
        int a;
        std::cin >> a;
        A.push_back(a);
//        std::cout << i;
    }
    for(int i = 0; i < N; i++){
        Sort(A, i);
        for(int j = 0; j < N-1; j++) std::cout << A[j] << ' ';
        std::cout << A[N-1] << std::endl;
    }
    return 0;
}