#include <iostream>
using namespace std;

int *func1(int *x);
int &func2(int &x);

//call by value
void swapValue(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

//call by pointer
void swapPointer(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// call by reference
void swapReference(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void cubeByReference(int *nPtr)
{
  *nPtr = *nPtr * *nPtr * *nPtr;
}

int global_var = 42;

void changePointerValue(int **ptr_ptr)
{
  *ptr_ptr = &global_var;
}

int main()
{

  //*pointer
  //&reference
  // int n = 10;
  // // 宣告指標時最好要給予初始值
  // int *p = &n;

  // cout << "n 的值：" << n << endl
  //      << "n 位址：" << &n << endl;
  // cout << "p 儲存的位址：" << p << endl;
  // cout << "提取 p 儲存位址處的物件：" << *p << endl;

  // *p = 20;
  // cout << "n = " << n << endl
  //      << "*p = " << *p << endl;

  //可以用void來儲存位址
  //  void *m = &n;
  //reinterpret_cast 用於指標，它告訴編譯器，你就是要以指定型態重新解釋 p 位址處的資料。
  // int *iptr = reinterpret_cast<int *>(m);
  // cout << "使用void取值" << *iptr << endl; // 顯示 10

  // const 宣告的變數指定值後，就不能再改變變數值，也無法對該變數取址：
  // const int l = 10;
  // int *k = &l; // error,  invalid conversion

  // int a = 22;
  // int b = 33;

  // int *aPtr = &a;
  // int *bPtr = &b;
  // aPtr = bPtr;
  // std::cout << "*aPtr: " << *aPtr << std::endl;   //33
  // std::cout << "*bPtr: " << *bPtr << std::endl;   //33
  // std::cout << "a: " << a << std::endl;           //22
  // std::cout << "b: " << b << std::endl;           //33
  // std::cout << std::endl;

  // int &aRef = a;
  // int &bRef = b;
  // aRef = bRef;
  // std::cout << "aRef: " << aRef << std::endl;      //33
  // std::cout << "bRef: " << bRef << std::endl;      //33
  // std::cout << "a: " << a << std::endl;            //33
  // std::cout << "b: " << b << std::endl;            //33
  // std::cout << std::endl;

  // int i = 3;
  // int j = 5;
  // int *p = &i;
  // int *n = &j;

  // swapValue(i,j);
  // swapPointer(p,n);
  // swapReference(i,j);
  // std::cout << "i : "<< i << std::endl;
  // std::cout << "j : "<< j << std::endl;

  //   int a = 0;
  // std::cout << *func1(&a) << std::endl; // output : 1;
  // std::cout << func2(a) << std::endl;   // output : 2

  // int number = 5;
  // int *numberReference = &number;
  // cubeByReference(numberReference);
  // std::cout << "number : " << number << std::endl;

  //const v.s 指標
  //const 需要初始值
  //const int number;

  //被 const 宣告的變數指定值後，就不能再改變變數值，也無法對該變數取址
  // const int n = 10;
  // int *p = &n;
  //const 宣告的變數只能用const來取值
  // const int n = 10;
  // const int *p = &n;
  //同樣不能改變值
  // *p = 20;

  // int var = 23;
  // int *pointer_to_var = &var;

  // cout << "Passing a pointer to a pointer to function " << endl;

  // cout << "Before :" << *pointer_to_var << endl; // display 23

  // changePointerValue(&pointer_to_var);

  // cout << "After :" << *pointer_to_var << endl; // display 42

  //陣列變數
  // int arr[10] = {0};
  // cout << "arr：\t\t" << arr << endl
  //      << "&arr[0]：\t" << &arr[0] << endl;

  // const int LENGTH = 10;
  // int arr[LENGTH] = {0};
  // int *p = arr;
  // //將陣列的首元素位址指定給 p，然後對 p 遞增運算，每遞增一個單位，陣列相對應索引的元素之位址都相同。
  // for (int i = 0; i < LENGTH; i++)
  // {
  //   cout << "&arr[" << i << "]: " << &arr[i]
  //        << "\tp+" << i << ": " << p + i << endl;
  // }

  // // 陣列指標
  // const int LENGTH = 5;
  // int arr[LENGTH] = {10, 20, 30, 40, 50};
  // int *p = arr;

  // //印出陣列參考位址
  // std::cout << "arr : "<< arr << std::endl;
  // //印出陣列參考位址
  // std::cout << "&arr : "<< &arr << std::endl;

  // // // 以指標方式存取
  // for (int i = 0; i < LENGTH; i++)
  // {
  //   cout << "*(p + " << i << "): " << *(p + i) << endl;
  // }
  // cout << endl;

  // // // 以指標方式存取資料
  // for (int i = 0; i < LENGTH; i++)
  // {
  //   cout << "*(arr + " << i << "): " << *(arr + i) << endl;
  // }
  // cout << endl;

  //   for (int i = 0; i < LENGTH; i++)
  // {
  //   cout << "*&arr+ " << i << "): " << *&arr[i] << endl;
  // }
  // cout << endl;

  return 0;
}

// Use pointer
int *func1(int *x)
{
  (*x)++;
  return x;
}

// Use reference
int &func2(int &x)
{
  x++;
  return x;
}