#include <iostream>

using namespace std;
#define MAX 500000

template<typename T>
class MaxHeap
{
public:
	MaxHeap(int maxSize = MAX)
	{
		m_maxSize = maxSize;
		m_currentSize = 0;
		m_pArray = new T[m_maxSize];
	}

	virtual ~MaxHeap()
	{
		if (m_pArray) delete[] m_pArray;
		m_pArray = 0;
	}

	void Push(const T& data)
	{
		if (m_currentSize >= m_maxSize) throw("MaxHeap is full!");

		m_pArray[m_currentSize++] = data;
	}

	void Print()
	{
		for (int i = 0; i < m_currentSize; ++i)
			cout << " " <<m_pArray[i];
		cout << endl;
	}

	void Sort()
	{
		for (int i = m_currentSize - 1; i >= 0; --i)
			TrickleDown(i);
	}

private:
	/**
	 * 向下渗透
	 */
	void TrickleDown(int index)
	{
		if (index >= m_currentSize) return;

		int maxChild = -1;
		int leftChild = (index << 1) + 1;
		int rightChild = leftChild + 1;
		if (rightChild < m_currentSize)//双子节点
		{
			if (m_pArray[leftChild] > m_pArray[rightChild])
				maxChild = leftChild;
			else
				maxChild = rightChild;
		}
		else if (leftChild < m_currentSize)//只有左子节点
			maxChild = leftChild;
		else//无子节点
			return;

		if (m_pArray[index] >= m_pArray[maxChild]) return;
		//当前节点值小于子节点，与子节点交换
		T temp = m_pArray[maxChild];
		m_pArray[maxChild] = m_pArray[index];
		m_pArray[index] = temp;
		TrickleDown(maxChild);
	}

private:
	T* m_pArray;
	int m_maxSize;
	int m_currentSize;
};

int main()
{
	int n; cin >> n;
	int v;
	MaxHeap<int> heap;
	for (int i = 0; i < n; ++i)
	{
		cin >> v;
		heap.Push(v);
	}
	heap.Sort();
	heap.Print();

	return 0;
}
