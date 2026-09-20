#include<iostream>

    int *get_array(int size)
{
    int *values = new int[size];

    for (int index = 0; index < size; index++)
    {
        std::cin >> values[index];
    }

    return values;
}

int main()
{
    int size;
    std::cin >> size;

    int *values = get_array(size);

    for (int index = 0; index < size; index++)
    {
        if (index > 0)
        {
            std::cout << ' ';
        }
        std::cout << values[index];
    }
    std::cout << '\n';

    delete[] values;
    return 0;
}
