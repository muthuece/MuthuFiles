#include "Instances.h"

#include <QDebug>
#include <iostream>
#include <memory>
#include <stdio.h>

using namespace std;

ConstrClass returnInst() {
  ConstrClass retObj = ConstrClass();
  return retObj;
}

Instances::Instances() {
  //    constrTestFunc();

  miniBytesTestFunc();
}
void Instances::miniBytesTestFunc() { MiniBytes m; }

void Instances::constrTestFunc() {
  testClassInstance();
  returnObj();
  moveTest();
  operatorTest();
}

void Instances::testClassInstance() {
  std::shared_ptr<ConstrClass> pConstObj = std::make_shared<ConstrClass>();

  qDebug() << "Address of pConstObj" << pConstObj->m_iVar;

  std::shared_ptr<ConstrClass> copiedObj(pConstObj);
  pConstObj->m_iVar = 20;
  qDebug() << "Address of pConstObj" << copiedObj->m_iVar;
  //  std::cout << pConstObj.get();

  ConstrClass *localVar = new ConstrClass();
  ConstrClass localVar2(localVar);

  localVar->m_iVar = 20;

  qDebug() << "localVar2 val " << localVar2.m_iVar;
}

void Instances::returnObj() {
  ConstrClass onj = returnInst();

  ConstrClass obg(onj);
}

void Instances::moveTest() {
  //  ConstrClass onj = returnInst();

  //  ConstrClass *ptr = &onj;
  //  ConstrClass newInst = onj;

  QVector<ConstrClass> vecInst;
  vecInst.push_back(ConstrClass(1));
  qDebug() << "Call1";
  vecInst.push_back(ConstrClass(2));
  qDebug() << "Call2";
  vecInst.push_back(ConstrClass(3));
  qDebug() << "Cal3";
  vecInst.push_back(ConstrClass(4));
  qDebug() << "Cal4";

  //  newInst.m_iVar = 55;
}

void Instances::operatorTest() {

  ConstrClass obj(25);
  ConstrClass obj2(35);

  ConstrClass obj3 = obj + obj2;
  qDebug() << obj2.m_iVar;
  qDebug() << obj3.m_iVar;

  obj2.m_iVar = 55;

  qDebug() << obj2.m_iVar;
  qDebug() << obj3.m_iVar;
}
