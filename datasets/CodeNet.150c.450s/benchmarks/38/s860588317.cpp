#include<iostream>
#include<algorithm>
#include<math.h>

int listen_dataCount();

class triangle
{
private:
	int longestLine;
	int line[2];
public:
	triangle();
	void is_rightTriangle();
};

triangle::triangle()
{
	using namespace std;
	int inputs[3];
	cin>>inputs[0]>>inputs[1]>>inputs[2];
	
	sort(inputs,inputs+3);
	
	this->longestLine=inputs[2];
	
	for(int roop=0;roop<2;roop++)
	{
		this->line[roop]=inputs[roop];
	}
}

void triangle::is_rightTriangle()
{
	using namespace std;
	if(pow(this->longestLine,2)==pow(this->line[0],2)+pow(this->line[1],2))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}

int main()
{
	int datacount=listen_dataCount();
	for(int roop=0;roop<datacount;roop++)
	{
		triangle tr=triangle();
		tr.is_rightTriangle();
	}
	
	return 0;
}

int listen_dataCount()
{
	using namespace std;
	
	int count;
	cin>>count;
	
	return count;
}