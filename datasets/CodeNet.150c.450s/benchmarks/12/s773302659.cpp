#include <iostream>

using namespace std;

#define MAX 250

template<typename T>
class Heap
{
public:
	Heap(int maxSize = MAX)
	{
		m_maxSize = maxSize;
		m_currentSize = 0;
		m_pArray = new T[m_maxSize];
	}

	virtual ~Heap()
	{
		if (m_pArray)
			delete[] m_pArray;

		m_pArray = 0;
	}

	void Push(const T& data)
	{
		if (m_currentSize >= m_maxSize) return;

		m_pArray[m_currentSize++] = data;
	}

	T* GetParent(int index)
	{
		// 根节点
		if (0 == index) return 0;

		int parent = (index - 1) >> 1;
		return &m_pArray[parent];
	}

	T* GetLeftChild(int index)
	{
		int leftChild = (index << 1) + 1;
		if (leftChild >= m_currentSize) return 0;

		return &m_pArray[leftChild];
	}

	T* GetRightChild(int index)
	{
		int rightChild = (index << 1) + 2;
		if (rightChild >= m_currentSize) return 0;

		return &m_pArray[rightChild];
	}

	void Print()
	{
		for (int i = 0; i < m_currentSize; ++i)
		{
			cout << "node " << i + 1 << ": key = " << m_pArray[i] << ", ";
			if(GetParent(i))
				cout << "parent key = " << *GetParent(i) << ", ";
			if (GetLeftChild(i))
				cout << "left key = " << *GetLeftChild(i) << ", ";
			if (GetRightChild(i))
				cout << "right key = " << *GetRightChild(i) << ", ";
			cout << endl;
		}
	}

private:
	T* m_pArray;
	int m_maxSize;
	int m_currentSize;
};

int main()
{
	int n; cin >> n;
	Heap<int> heap;
	int v;
	for (int i = 0; i < n; ++i)
	{
		cin >> v;
		heap.Push(v);
	}

	heap.Print();

	return 0;
}
