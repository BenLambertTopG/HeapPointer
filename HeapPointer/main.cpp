#include <iostream>

int *int_ptr{nullptr};

void Change(int x);

int main()
{

    int_ptr = new int;
    std::cout << "int pointer:" << *int_ptr << std::endl;
    *int_ptr = 200;
    std::cout << "int pointer:" << *int_ptr << std::endl;
    Change(250);
    delete int_ptr;

    return 0;
}

void Change(int x)
{

    *int_ptr = x;
    std::cout << "int pointer:" << *int_ptr << std::endl;
}