#include <iostream>
#include <array>
#include <vector>

int main()
{
    //int data[] = {1,2,3,4,5,6};
    std::vector<int> data {1,2,3,4,5,6};

    for(int n: data)
    {
        std::cout<<n<<"\t";
    }    
}