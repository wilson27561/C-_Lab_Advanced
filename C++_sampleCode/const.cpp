#include <iostream>
using namespace std;

int main()
{
  const int value1 = 10;
  int const value2 = 10;

  int value3 = 20;
  //ptr1 ptr2 的內容為常量不可變
  const int *ptr1 = &value3;
  int const *ptr2 = &value3;

  // ptr3 ptr4 指針本身為常量不可變
  int *const ptr3 = &value3;
  const int *ptr4 = &value3;

  //指針 內容都不可以變
  const int *const ptr5 = &value3;

  //const修飾函數參數,函數參數在函數內都不能不改動
  
  //  參數指標所指內容為常量不可變
   void function(const char* Var);
  //  參數指標本身為常量不可變
   void function(char* const Var); 

  return 0;
}
