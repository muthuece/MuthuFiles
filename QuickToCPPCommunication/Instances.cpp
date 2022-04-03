#include "Instances.h"

#include <iostream>
using namespace std;
#include <QDebug>
#include <memory>
#include <stdio.h>

Instances::Instances() { testClassInstance(); }

void Instances::testClassInstance() {
  std::shared_ptr<ConstrClass> pConstObj = std::make_shared<ConstrClass>();

  qDebug() << "Address of pConstObj" << pConstObj;
}
