#include "SortingMechanisms.h"
#include "iostream"
#include <QDebug>

//#define PRINTARR(arrType) printArr(arrType);

SortingMechanisms::SortingMechanisms()
    : m_arr{22, 36, 11, 5, 99, 54, 78, 81, 41, 1} {

  //  printArr(m_arr);
  bubbleSort(m_arr);
}

void SortingMechanisms::bubbleSort(const int (&arr)[10]) {
  auto tempArrsumma = arr;

  Q_UNUSED(tempArrsumma)
  //  printArr(tempArr);

  //  int tempArr[10] = {22, 36, 11, 5, 99, 54, 78, 81, 41, 1};
  int tempArr[6] = {5, 4, 1, 3, 2, 6};

  int swapCount = 0;
  for (uint8_t j = 5; j > 0; j--) {

    for (uint8_t i = 0; i < j; i++) {
      if (tempArr[i] > tempArr[i + 1]) {
        int64_t tempVal = tempArr[i];
        tempArr[i] = tempArr[i + 1];
        tempArr[i + 1] = tempVal;
        swapCount++;
      }
    }
  }

  for (uint8_t i = 0; i < 5; i++) {
    qDebug() << "Pos : " << i << " Val : " << tempArr[i];
  }

  qDebug() << "swapCount " << swapCount;
}

void SortingMechanisms::printArr(const int (&arr)[10]) {

  for (uint8_t i = 0; i < 10; i++) {
    qDebug() << "Pos : " << i << " Val : " << arr[i];
  }
}
