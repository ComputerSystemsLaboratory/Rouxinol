#include<cstdio>

class CMultiplication
{
	public:
		// Public member function
		CMultiplication(void);
		bool InputMatrixVector(void);
		bool CheckPrm(int row, int col);
        bool CheckPrm(int prm);
		void PrintMulVector(void);
	private:
		// Private member variable
		static const int LINE_MAX = 100;
		static const int ELEMENT_MAX = 1000;
		int matrix[LINE_MAX][LINE_MAX];
		int vector[LINE_MAX];
		int col;
		int row;
		int vectormul[LINE_MAX];
};

CMultiplication::CMultiplication(void)
{
	for(int i = 0; i < LINE_MAX; i++)
	{
		for(int j = 0; j < LINE_MAX; j++)
		{
			matrix[i][j] = 0;
		}
		vector[i] = 0;
		vectormul[i] = 0;
	}
	col = 0;
	row = 0;
}

bool CMultiplication::InputMatrixVector(void)
{
	scanf("%d %d", &row, &col);
    if(CheckPrm(row, col) == false)
    {
        return false;
    }
    
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			scanf("%d", &matrix[i][j]);
            if(CheckPrm(matrix[i][j]) == false)
            {
                return false;
            }
		}
	}
    
	for(int k = 0; k < col; k++)
	{
		scanf("%d", &vector[k]);
        if(CheckPrm(vector[k]) == false)
        {
            return false;
        }
	}
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			vectormul[i] += (matrix[i][j] * vector[j]);
		}
	}
	
	return true;
}

bool CMultiplication::CheckPrm(int row, int col)
{
	if( (row < 1) || (row > LINE_MAX) ||
		(col < 1) || (col > LINE_MAX) )
	{
		return false;
	}
	
	return true;
}
bool CMultiplication::CheckPrm(int prm)
{
	if( (prm < 0) || (prm > ELEMENT_MAX) )
    {
		return false;
	}
	
	return true;
}

void CMultiplication::PrintMulVector(void)
{
	for(int i = 0; i < row; i++)
	{
		printf("%d\n", vectormul[i]);
	}
}

int main(void)
{
	CMultiplication mul;
	
	if(mul.InputMatrixVector() == false)
    {
        return -1;
    }
	
	mul.PrintMulVector();
	
	return 0;
}

