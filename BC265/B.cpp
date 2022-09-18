#include <iostream>
#include <vector>

int main()
{
    long long N, M, T ;
    std::cin >> N >> M >> T;
    std::vector<long long> A(N - 1);
    for (long long i = 0; i < N - 1; i++)
    {
        std::cin >> A[i];
    }
    std::vector<long long> X(M), Y(M);
    for (long long i = 0; i < M; i++)
    {
        std::cin >> X[i] >> Y[i];
    }

    std::vector<long long> timeAdd = std::vector<long long>(N, 0);
    for (int i = 0; i < M; i++)
    {
        timeAdd[X[i]] = Y[i];
    }
    

    long long j = 0;
    for (long long i = 0; i < N - 1; i++)
    {
        T -= A[i];
        if (T <= 0)
        {
            std::cout << "No" << std::endl;
            return 0;
        }
        if (i < N - 2)
        {
            T += timeAdd[i + 2];
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
//AC