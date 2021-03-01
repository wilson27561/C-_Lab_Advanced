#include <iostream>
using namespace std;

int g_int = 0;
// void changePtr(int *pInt)
// {
//   pInt = &g_int;
// }
void changePtr(int **pInt)
{
  *pInt = &g_int;
}

void changePtr(int *&refPInt)
{
  refPInt = &g_int;
}

int main()
{

  int v = 100;
  int *pt1 = &v;
  int **pt2 = &pt1;

  std::cout << "the value of variable v is = " << v << std::endl;
  std::cout << "the pointer variable pt1 is = " << pt1 << std::endl;
  std::cout << "the value of pointer  pt1 is = " << *pt1 << std::endl;
  std::cout << "the address of pointer  pt1 is = " << &pt1 << std::endl;
  std::cout << "the pointer  pt2 is = " << pt2 << std::endl;
  std::cout << "the address of pointer  pt2 is = " << &pt2 << std::endl;
  std::cout << "the value of pointer pt2 is = " << *pt2 << std::endl;
  std::cout << "the value of pointer pt2 is = " << **pt2 << std::endl;

  //reference https://www.geeksforgeeks.org/go-pointer-to-pointer-double-pointer/

  // int localInt = 1;
  // int *localPInt = &localInt;
  // changePtr(localPInt);
  // std::cout << *localPInt << std::endl;

  // int localInt = 1;
  // int *localPInt = &localInt;
  // changePtr(&localPInt);
  // std::cout << *localPInt << std::endl;

  // int localInt = 1;
  // int *localPInt = &localInt;
  // changePtr(localPInt);
  // std::cout << *localPInt << std::endl;

  return 0;
}
