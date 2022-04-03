#include "ConstrClass.h"

ConstrClass::ConstrClass() { m_iVar = 10; }

ConstrClass::ConstrClass(const ConstrClass &rObject) {
  m_iVar = rObject.m_iVar;
}
