#include <iostream>
#include <vector>

int func(int A);

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> T(N), X(N), A(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> T[i] >> X[i] >> A[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        std::cout << T[i] << " " << X[i] << " " << A[i] << std::endl;
    }
    

    int T_max = T[T.size() - 1];
    std::cout << T_max << std::endl;
    for (int i = 0; i < T_max; i++)
    {
        if (T[i] != i)
        {
            T.insert(T.begin() + i, i);
            X.insert(X.begin() + i, 0);
            A.insert(A.begin() + i, 0);
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << T[i] << " " << X[i] << " " << A[i] << std::endl;
    }

    return 0;
}
/*
int func(int n, int t, int pos, std::vector<int>& T, std::vector<int>& X, std::vector<int>& A)
{
    if(t == T[T.size() - 1] && pos == X[T.size() - 1])
    {
        
    }


}
*/
//途中