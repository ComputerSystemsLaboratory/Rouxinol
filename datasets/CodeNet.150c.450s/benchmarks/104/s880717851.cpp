#include<iostream>

int listen_lineCount();
void listen_path(int &from,int &to);

class Lots
{
private:
	int *start_goal;
	int verLineNum;
public:
	Lots(const int lineCount);
	~Lots();
	
	void draw_line(const int from,const int to);
	void echo_goalNums();
};

//-------------------------main--------------------------------

int main()
{
	int ver_lineCount=listen_lineCount();
	Lots inst_lot=Lots(ver_lineCount);
	
	int hor_lineCount=listen_lineCount();
	
	int from,to;
	for(int roop=0;roop<hor_lineCount;roop++)
	{
		listen_path(from,to);
		inst_lot.draw_line(from,to);
	}
	
	inst_lot.echo_goalNums();
	return 0;
}

//--------------------------------------------------------------

Lots::Lots(const int lineCount)
{
	verLineNum=lineCount;
	start_goal=new int[lineCount+1];
	
	for(int roop=1;roop<=lineCount;roop++)
	{
		start_goal[roop]=roop;
	}
}

Lots::~Lots()
{
	delete [] start_goal;
}

void Lots::draw_line(const int from,const int to)
{
	int swap=start_goal[from];
	start_goal[from]=start_goal[to];
	start_goal[to]=swap;
}

void Lots::echo_goalNums()
{
	using namespace std;
	
	for(int roop=1;roop<=verLineNum;roop++)
	{
		cout<<start_goal[roop]<<endl;
	}
}


int listen_lineCount()
{
	using namespace std;
	
	int lineCount;
	cin>>lineCount;
	
	return lineCount;
}

void listen_path(int &from,int &to)
{
	using namespace std;
	
	char delim;//カンマ区切り
	
	cin>>from>>delim>>to;
}