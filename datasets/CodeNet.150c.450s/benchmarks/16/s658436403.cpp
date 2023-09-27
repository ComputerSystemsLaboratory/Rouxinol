#include <iostream>
#include <stack>

using namespace std;

typedef struct 
{
    unsigned int left;
    unsigned int area;
}AreaInfo_t;

#define CalcArea(x,y) ((x) - (y))

stack<unsigned int> ArealeftIdxStack;
stack<AreaInfo_t> AreaInfoStack;
stack<unsigned int> PrintStack;

bool Decision(char, unsigned int);
void Fusion(AreaInfo_t);
void PrintArea(void);

int main(void){
    char ch;
    unsigned int idx = 0;
    
    while(cin >> ch)
    {
        Decision(ch, idx);
        idx++;
    }

    PrintArea();
    
    return 0;
    
}

bool Decision(char ch, unsigned int idx)
{
    switch(ch)
    {
        case '\\':
            ArealeftIdxStack.push(idx);
            break;
        case '/':
            if(ArealeftIdxStack.empty())
            {
                break;
                
            }
            AreaInfo_t area;
            area.left = ArealeftIdxStack.top();
            area.area = CalcArea(idx, ArealeftIdxStack.top());
            Fusion(area);
            ArealeftIdxStack.pop();
            break;
        case '_':
            // pass
            break;
        default:
            return false;
    }

    return true;
}

void Fusion(AreaInfo_t tInfo)
{
    
    while(1)
    {
        if(AreaInfoStack.empty())
        {
            AreaInfoStack.push(tInfo);
            break;
        }
        
        AreaInfo_t tmp = AreaInfoStack.top();
        if(tmp.left > tInfo.left)
        {
            tInfo.area += tmp.area;
            AreaInfoStack.pop();
        }
        else
        {
            AreaInfoStack.push(tInfo);
            break;
        }
    }
    return;
}

void PrintArea()
{
    unsigned int total = 0;
    unsigned int num = 0;
    
    num = AreaInfoStack.size();
    
    while(1)
    {
        if(AreaInfoStack.empty())
        {
            break;
        }
        unsigned int tmp = AreaInfoStack.top().area;
        total += tmp;
        PrintStack.push(tmp);
        AreaInfoStack.pop();
    }

    cout << total << endl;
    cout << num;
    while(1)
    {
        if(PrintStack.empty())
        {
            cout << endl; 
            break;
        }
        else
        {
            cout << " ";
        }
        cout << PrintStack.top();
        PrintStack.pop();
    }
    
    return;
}

