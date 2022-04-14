#include "MiniBytes.h"
#include "QDebug"

MiniBytes::MiniBytes() {

  //  lambdaTest();
  //  lambdaTest2();
  typeCastingTest();
}

int *fun(int *ptr) {
  *ptr = *ptr + 10;
  qDebug() << "address of ptr " << ptr;
  return (ptr);
}

void MiniBytes::lambdaTest() {

  std::vector<int> v{22, 35, 66, 58, 95, 88, 74, 51, 45, 49};

  struct {
    void operator()(int) { qDebug() << "lambdaTest"; }
  } f;

  std::for_each(v.begin(), v.end(), f);
}

void MiniBytes::lambdaTest2() {
  std::vector<int> v{4, 1, 3, 5, 2, 3, 1, 7};

  for_each(v.begin(), v.end(), [](int i) { qDebug() << i; });

  //   printVector(v);

  // below snippet find first number greater than 4
  // find_if searches for an element for which
  // function(third argument) returns true
  //  std::vector<int>::iterator p =
  //      find_if(v.begin(), v.end(), [](int i) { return i > 4; });
  //   std::cout << "First number greater than 4 is : " << *p << endl;

  // function to sort vector, lambda expression is for sorting in
  // non-increasing order Compiler can make out return type as
  // bool, but shown here just for explanation
  sort(v.begin(), v.end(), [](const int &a, const int &b) -> bool {
    //    qDebug() << a << " B: " << b;
    //    qDebug() << (a > b);
    return a > b;
  });

  for_each(v.begin(), v.end(), [](int i) { qDebug() << i; });
}
void MiniBytes::typeCastingTest() {
  const int val = 10;
  qDebug() << "address of val " << &val;
  const int *ptr = &val;
  int *ptr1 = const_cast<int *>(ptr);
  qDebug() << "address of b4 ptr1 " << ptr1;
  fun(ptr1);
  ptr1 = const_cast<int *>(&val);
  *ptr1 = 35;
  qDebug() << "address of after ptr1 " << ptr1;

  qDebug() << " Value val" << val;
  qDebug() << " Value *ptr" << *ptr;
  qDebug() << " Value *ptr1" << *ptr1;
  qDebug() << " addredd of val" << &val;

  int tempVal = *ptr1;
  qDebug() << " new val" << tempVal;
}
