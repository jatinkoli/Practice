#include <iostream>
int main()
{
    int num[10],sum;
    float avg=0.0;
    std::cout << "Enter 10 elements: " << std::endl;
    for(int i=1; i<=10; i++)
    std::cin >> num[i];
    sum=0;
        for(int i=1; i<=10; i++)
    {
        sum=sum+num[i];
    }
    avg=sum/10;
    std::cout << "Sum=" <<sum;
    std::cout << "Average=" <<avg;
}
