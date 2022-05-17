#ifndef SORTINGMECHANISMS_H
#define SORTINGMECHANISMS_H

class SortingMechanisms {
public:
  explicit SortingMechanisms();

private:
  void bubbleSort(const int (&arr)[10]);
  void printArr(const int (&arr)[10]);

  int m_arr[10];
};

#endif // SORTINGMECHANISMS_H
