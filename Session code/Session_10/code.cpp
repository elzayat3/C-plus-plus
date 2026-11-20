#include<memory>
// #include<iostream>

void fun(std::unique_ptr<int>&ptr);


void delete_array(int*p)
{
    delete[] p;
}


int main()
{
    // std::unique_ptr<int> ptr(new int(4));

    // std::unique_ptr<int> ptr2=std::unique_ptr<int>(new int (4));

    // fun(ptr);

    std::unique_ptr<int[], decltype(&delete_array)> ptr4(new int[4]{1, 2, 3, 4}, delete_array);



}


void fun(std::unique_ptr<int>&ptr)
{

}