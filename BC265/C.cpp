#include <iostream>
#include <vector>
#include <string>
#include <map>

bool isNotOut(int i, int j, int H, int W);

int main()
{
    int H, W;
    std::cin >> H >> W;
    std::vector<std::string> G(H);
    for (int i = 0; i < H; i++)
    {
        std::cin >> G[i];
    }

    int i = 0;
    int j = 0;
    int i_last = i;
    int j_last = j;
    while (isNotOut(i, j, H, W))
    {
        i_last = i;
        j_last = j;
        switch (G[i][j])
        {
        case 'U':
            G[i][j] = 'O';
            i--;
            break;
        case 'D':
            G[i][j] = 'O';
            i++;
            break;
        case 'L':
            G[i][j] = 'O';
            j--;
            break;
        case 'R':
            G[i][j] = 'O';
            j++;
            break;
        case 'O':
                std::cout << -1 << std::endl;
                return 0;
        }

    }

    std::cout << i_last + 1 << " " << j_last + 1 << std::endl;
    return 0;
}

bool isNotOut(int i, int j, int H, int W)
{
    if (i < 0)
    {
        return false;
    }
    if (j < 0)
    {
        return false;
    }
    if (i > H - 1)
    {
        return false;
    }
    if (j > W - 1)
    {
        return false;
    }
    return true;
}
//AC