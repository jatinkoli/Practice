#include <iostream>
int main()
{
    int prime, c=0;
    std::cout << "Enter the number" << std::endl;
    std::cin >> prime;
    for (int i=2; i<prime; i++)
    {
        if (prime%i==0)
        c=1;
    }
    if (c==0)
    std::cout<<"The number "<<prime<<" is prime";
    else
    std::cout<<"The number "<<prime<<" is not prime";
}