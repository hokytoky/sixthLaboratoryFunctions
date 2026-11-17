/****************************************************
 * Автор:   Сабитов Ильнур                          *
 * Задание: Функции                                 *
 * Вариант: 28                                      *
 ****************************************************/

#include <iostream>

using namespace std;

// fun
double sumNonZero(const double values[], int count) {
  double sum;
  int elementIndex;

  sum = 0.0;
  for (elementIndex = 0; elementIndex < count; ++elementIndex) {
    if (values[elementIndex] != 0.0) {
      sum = sum + values[elementIndex];
    }
  }

  return sum;
}

int main() {
  const int maxSize = 100;
  const int maxMagnitude = 1000;

  double firstValues[maxSize];
  double secondValues[maxSize];
  int firstCount;
  int secondCount;
  int elementIndex;
  double firstSum;
  double secondSum;

  cout << "Enter size k of array P (1-100): ";
  if (!(cin >> firstCount) || firstCount < 1 || firstCount > maxSize) {
    cout << "INVALID\n";
    return 1;
  }

  for (elementIndex = 0; elementIndex < firstCount; ++elementIndex) {
    cout << "Enter element " << elementIndex + 1 << " of array P: ";
    if (!(cin >> firstValues[elementIndex]) || firstValues[elementIndex] < -maxMagnitude ||
      firstValues[elementIndex] > maxMagnitude) {
      cout << "INVALID\n";
      return 1;
    }
  }

  cout << "Enter size m of array Q (1-100): ";
  if (!(cin >> secondCount) || secondCount < 1 || secondCount > maxSize) {
    cout << "INVALID\n";
    return 1;
  }

  for (elementIndex = 0; elementIndex < secondCount; ++elementIndex) {
    cout << "Enter element " << elementIndex + 1 << " of array Q: ";
    if (!(cin >> secondValues[elementIndex]) || secondValues[elementIndex] < -maxMagnitude ||
      secondValues[elementIndex] > maxMagnitude) {
      cout << "INVALID\n";
      return 1;
    }
  }

  firstSum = sumNonZero(firstValues, firstCount);
  secondSum = sumNonZero(secondValues, secondCount);

  cout << "Sum of nonzero elements of P: " << firstSum << "\n"
    << "Sum of nonzero elements of Q: " << secondSum << "\n";

  return 0;
}