#include <iostream>
double pow(double, int);
int main()
{
    double x;
    int n;
    std::cin >> x>> n;
    std::cout << pow(x,n) << std::endl;
}
double pow(double x, int n)
{
    if(x==0) return 0;
    if(n==0) return 1;
    double y=1;
    for(int i=0; i<n; i++)
    y=y*x;
    for(int i=0; i>n; i--)
    y=y/x;
    return y;
}