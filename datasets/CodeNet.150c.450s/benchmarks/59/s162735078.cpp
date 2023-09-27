#include <iostream>

namespace myspace{
	
	class vector{
	public:
		void push_back(int);
		int size();
		int &operator[](int);
		vector();
		vector(const vector&);
		~vector();
	private:
		int s;
		int* box;
	};
	
	vector::vector()
	{
		box = NULL;
		s = 0;
	}
	
	vector::vector(const vector &X)
	{
		s = X.s;
		box = new int[X.s];
		for(int i=0; i<X.s; i++)box[i] = X.box[i];
	}
	
	vector::~vector()
	{
		if(box)delete[] box;
	}
	
	int &vector::operator[](int i)
	{
		return box[i];
	}
	
	int vector::size()
	{
		return s;
	}
	
	void vector::push_back(int input)
	{
		int* box2 = box;
		box = new int[s+1];
		for(int i=0; i<s; i++)box[i] = box2[i];
			
		box[s] = input;
		s++;
	}
}//??????????????????myspac

using namespace myspace;
using namespace std;

void Output(vector A)
{
    int i;
    for(i=0;i<A.size()-1;i++){
        cout << A[i] << " ";
    }
    cout << A[i] << endl;
}
 
void InsertionSort(vector A,int n)
{
    for(int i=0;i<n;i++)
    {
        int v = A[i];
        int j = i - 1;
        while(j>=0 && A[j]>v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        Output(A);
    }
}
 
int main()
{   
    int n;
    cin >> n;
     
    vector A;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
    InsertionSort(A, n);
     
    return 0;
}