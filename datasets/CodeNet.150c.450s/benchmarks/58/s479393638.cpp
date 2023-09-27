#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;
class stack{
public:
	stack();
	stack(int s);
	stack(const stack& r);
	int get(int index){return a[index];}
	void push(int n);
	int isEmpty();
	int isFull();
	int pop();
	~stack(){delete []a;}
protected:
	int *a;
	int size;
	int top;
};
int getnum(const string& str)
{
    int s=0,len=str.length();
    for(int i=0;i<len;i++)
        s+=((str[i]-'0')*pow(10,len-1-i));
    return s;
}
int main()
{
	stack v;
	string ch;
	while(cin>>ch)
	{
		if(isdigit(ch[0]))
		{
			int temp=getnum(ch);
			v.push(temp);
		}
		else
		{
			int t1=v.pop();
			int t2=v.pop();
			switch(ch[0])
			{
				case '+':
					v.push(t2+t1);
					break;
				case '-':
					v.push(t2-t1);
					break;
				case '*':
					v.push(t2*t1);
					break;
			}
		}
	}
	cout<<v.pop()<<endl;
	return 0;
}

stack::stack()
{
	top=0;
	size=250;
	a=new int[size];
}

stack::stack(int s)
{
	top=0;
	size=s;
	a=new int[s];
}

stack::stack(const stack& r)
{
	size=r.size;
	a=new int[size];
	top=r.top;
}

void stack::push(int n)
{
	a[top]=n;
	top++;
}

int stack::isEmpty()
{
	if(top==0)
		return 1;
	return 0;
}

int stack::isFull()
{
	if(top==size)
		return 1;
	return 0;
}

int stack::pop()
{
	top--;
	return a[top];
}


