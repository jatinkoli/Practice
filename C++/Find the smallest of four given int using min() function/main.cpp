#include <iostream>
int min (int, int, int, int);
int
main ()
{
    std::cout << "Enter your numer" << std::endl;
  int w, x, y, z;
  std::cin >> w >> x >> y >> z;
  std::cout << min (w, x, y, z);
}

int
min (int n1, int n2, int n3, int n4)
{
  int min = n1;
  if (n2 < min)
    {
      min = n2;
    }
  if (n3 < min)
    {
      min = n3;
    }
  if (n4 < min)
    {
      min = n4;
    }
    std::cout << "The smallest value is" << std::endl;
  return min;
}
