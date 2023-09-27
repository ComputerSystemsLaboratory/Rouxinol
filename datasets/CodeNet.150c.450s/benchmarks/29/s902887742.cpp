#include <cassert>
#include <cstdio>
#include <string>

class TDllist
{
    int* FList; //[4000000];
    int FBegin;
    int FEnd;
public:
    TDllist()
    {
        FList = new int[4000000];
        FBegin = 2000000;
        FEnd  = 2000000;
    }
    ~TDllist()
    {
        delete[] FList;
    }
    void Insert(int X)
    {
        --FBegin;
        FList[FBegin] = X;
    }
    void Delete(int X)
    {
        int Index = FEnd;
        for(int i = FBegin; i < FEnd; ++i){
            if(X == FList[i]){
                Index = i;
                break;
            }
        }
        if(Index == FEnd) return;
        for(int i = Index; i < FEnd; ++i){
            FList[i] = FList[i+1];
        }
        FEnd--;
    }
    void DeleteFirst()
    {
        FBegin++;
    }
    void DeleteLast()
    {
        FEnd--;
    }
    void Show()const
    {
        printf("%d", FList[FBegin]);
        for(int i = FBegin + 1; i < FEnd; ++i){
            printf(" %d", FList[i]);
        }
        printf("\n");
    }
};

int main()
{
    TDllist List;
    int n, X;
    std::scanf("%d\n", &n);
    char com[1024];
    for(int i = 0; i < n; ++i){
        // List.Show();
        // std::printf("n:%d\n", i);
        std::fgets(com, 1024, stdin);
        if(com[6] == 'F'){
            // printf("deleteFirst\n");
            List.DeleteFirst();
        }else
        if(com[6] == 'L'){
            // printf("deleteLast\n");
            List.DeleteLast();
        }else{
            int v = 0;
            for(int j = 7; com[j] >= '0' && com[j] <= '9'; ++j){
                // printf("%s\n", com);
                // printf("%d\n", com[j]);
                v = v*10 + (com[j] - '0');
            }
            if(com[0] == 'i'){
                // printf("insert %d\n", v);
                List.Insert(v);
            }else
            if(com[0] == 'd'){
                // printf("delete %d\n", v);
                List.Delete(v);
            }
        }
    }
    List.Show();
    return 0;
}