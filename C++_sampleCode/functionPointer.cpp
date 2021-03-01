#include <iostream>
using namespace std;

int func(int a)
{
  return a + 5;
};

string func2(int a, int b)
{
  string name = "wilson";
  return name;
}

// 宣告一個函數func，這個函數用來相加接收到的兩個參數，並且回傳
int func(int a, int b)
{
  return a + b;
};
// 宣告一個函數add_func，這個函數接收兩個變數a與b，以及一個function pointer
int add_func(int a, int b, int (*func_ptr)(int, int))
{
  int c;
  c = func_ptr(a, b);
  return c;
};
int func3()
{
 std::cout << "good" << std::endl;
 return 1;
};

int main()
{
  //宣告一個function pointer 來指向func這個函數
  //回傳值 函數pointer 參數
  int (*func_ptr)(int) = func;
  std::cout << func_ptr(10) << std::endl;

  //Example1
  string (*func2_ptr)(int, int) = func2;
  std::cout << func2_ptr(10, 20) << std::endl;

  //Example2
  int (*func3_ptr)() = func3;
   func3_ptr();

  //function advanced

  // add_func接收的三個參數分別為10, 20以及func。add_func會使用
  // func這個函數，將10與20相加。而add_func會回傳這個結果
  int d = add_func(10, 20, func);
  std::cout << d << std::endl;

  return 0;
}
