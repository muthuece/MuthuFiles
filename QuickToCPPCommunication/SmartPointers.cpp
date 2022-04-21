#include "SmartPointers.h"
#include "QDebug"

class tempClass {

public:
  tempClass() { qDebug() << "TempClass constr"; }
  ~tempClass() { qDebug() << "TempClass destr"; }

  void testFunc() { qDebug() << "TempClass testFunc Val=" << m_Val; }

  int m_Val = 0;
};

template <class T> class SmartPtr {
private:
  T *m_ptr;

public:
  T *get() { return m_ptr; }

  SmartPtr(T *newObj = NULL) { m_ptr = newObj; }

  ~SmartPtr() { delete m_ptr; }

  T &operator*() { return *m_ptr; }

  T *operator->() { return m_ptr; }
};

SmartPointers::SmartPointers() {
  SmartPtr<tempClass> sPtr = new tempClass();
  sPtr->testFunc();
  //  tempClass ptr = *sPtr;
  sPtr->m_Val = 20;
  tempClass *ptr = sPtr.get();
  ptr->testFunc();
}
