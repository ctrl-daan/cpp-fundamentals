#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate (int count)
{
    std::vector<std::shared_ptr<int>> myVec;

    for (size_t i = 0; i < count; i++)
    {
        std::shared_ptr<int> ptr = std::make_shared<int>(i);
        myVec.push_back(ptr);
    }
    
    return myVec;
}
void print(std::vector<std::shared_ptr<int>> ptr_vec)
{
    for (auto c : ptr_vec)
        {std::cout<<"COTO JEST:"<<*c<<"\n";}
}
void add10(std::vector<std::shared_ptr<int>> ptr_vec)
{
    for (auto c : ptr_vec)
        if (c != nullptr)
            *c += 10;

}
void sub10(int*ptr )
{

}
void sub10(std::vector<std::shared_ptr<int>> ptr_vec)
{

}