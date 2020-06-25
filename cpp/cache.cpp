#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    
    while( t-- )
    {
        // n = elements in total which has to be loaded
        // b = block size that is cache capacity
        // m = number of queries from processor to cache

        int n, b, m;
        std::cin >> n >> b >> m;
        int x[m];
        int current_block = -1;
        int count = 0;
        for( int i = 0; i < m; i++)
        {
            std::cin >> x[i];
            // if cache is empty that intital load the desired one
            // check if cache has what we want or not
            // if not then load and do count++
            int desired_block = x[i] / b;
            if( current_block == -1 )
            {
                current_block = desired_block;
                count++;
            }
            else if( current_block != desired_block )
            {
                current_block = desired_block;
                count++;
            }
            
        }
        std::cout << count << std::endl; 
     
    }
}
