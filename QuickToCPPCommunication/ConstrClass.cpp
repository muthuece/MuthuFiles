#include "ConstrClass.h"
#include "QDebug"

ConstrClass::ConstrClass(int val) {
  qDebug() << "ConstrClass::ConstrClass constr";
  m_iVar = val;
}

ConstrClass::ConstrClass(const ConstrClass &rObject) {

  m_iVar = rObject.m_iVar;
  qDebug() << "ConstrClass::ConstrClass copy constr " << m_iVar;
}

ConstrClass::ConstrClass(const ConstrClass *rObject) {

  m_iVar = rObject->m_iVar;
  qDebug() << "ConstrClass::ConstrClass copy constr* " << m_iVar;
}

ConstrClass::ConstrClass(ConstrClass &&rObject) {
  qDebug() << "Move constr";
  m_iVar = rObject.m_iVar;
  rObject.m_iVar = 0;
}

ConstrClass &ConstrClass::operator+(ConstrClass &inst) {
  ConstrClass ret;
  ret.m_iVar = m_iVar + inst.m_iVar;
  return inst;
}
