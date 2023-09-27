#include <iostream>

using namespace std;

enum Walk
{ PreOrder,  InOrder, PostOrder, };

class Node
{
  public:
    Node(){ MyId = ParentId = Left = Right = -1; }
    int MyId;
    int ParentId;
    int Left;
    int Right;
};

Node* Nodes;
Node *Root;

void Print(Node*p)
{ cout << (" ") << p->MyId; }

void Rec(Node *p, Walk walk)
{

  if(walk == PreOrder)
    Print(p);
   
  if(p->Left >= 0)
    Rec(&Nodes[p->Left], walk); 

  if(walk == InOrder)
    Print(p);

  if(p->Right >= 0)
    Rec(&Nodes[p->Right], walk);

  if(walk == PostOrder)
    Print(p);

  return;
  
}


int main()
{

  int N;
  cin >> N;

  Nodes = new Node[N];

  for(int i = 0; i < N; ++i)
    Nodes[i].MyId = i;

  for(int i = 0; i < N; ++i)
  {
    int Id; cin >> Id;
    int Left; cin >> Left;
    int Right; cin >> Right;

    if(Left >= 0)
    {
      Nodes[Id].Left = Left;
      Nodes[Left].ParentId = Id;
    }
    if(Right >= 0)
    {
      Nodes[Id].Right = Right;
      Nodes[Right].ParentId = Id;
    }
  }

  for(int i = 0; i < N; ++i) 
    if(Nodes[i].ParentId == -1)
      Root = &Nodes[i];

  cout << "Preorder" << endl;
  Rec(Root, PreOrder);
  cout << endl;

  cout << "Inorder" << endl;
  Rec(Root, InOrder);
  cout << endl;

  cout << "Postorder" << endl;
  Rec(Root, PostOrder);
  cout << endl;

  delete [] Nodes;

  return 0;
}


