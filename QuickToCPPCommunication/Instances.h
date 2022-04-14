#ifndef INSTANCES_H
#define INSTANCES_H

#include "ConstrClass.h"
#include "MiniBytes.h"

// template <typename T> T returnInst() {
//  T retObj = T();
//  return retObj;
//}

class Instances {
public:
  Instances();

private:
  // MiniBytes test Funcs
  void miniBytesTestFunc();

  // Constr class test Funcs
  void constrTestFunc();
  void testClassInstance();
  void testCopy();
  void returnObj();
  void moveTest();
  void operatorTest();
};

#endif // INSTANCES_H
