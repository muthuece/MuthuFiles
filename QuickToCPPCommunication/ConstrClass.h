#ifndef CONSTRCLASS_H
#define CONSTRCLASS_H

class ConstrClass {
public:
  ConstrClass(int val = 10);

  // Overloading Constr

  // Copy constr
  ConstrClass(const ConstrClass &rObject);

  // Copy constr
  ConstrClass(const ConstrClass *rObject);

  ConstrClass(ConstrClass &&rObject);

  ConstrClass &operator+(ConstrClass &inst);

  // Member variables
  int m_iVar;
};

#endif // CONSTRCLASS_H
