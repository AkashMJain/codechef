#include <iostream>

int main()
{
    int m;
    std::cin >> m;

    int books[m+1];
    for( int i = 1; i <= m; i++)
    {
        std::cin >> books[i];

    }
    int n;
    std::cin >> n;
    int reg;
    int count = 0;
    for( int i = 0; i < n; i++)
    {
        count = 0;
        std::cin >> reg;
        for(int j = 0; j < reg; j++)
        {
            if( books[j] == -1 )
            {
                count++;
                    
            }
        }
        int load = books[reg+count];
        books[reg + count] = -1;
        std::cout << load << std::endl; 

    }
    
}

