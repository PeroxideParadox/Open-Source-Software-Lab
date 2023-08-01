//Here is the Simple Task of the First Lab
#include <iostream>
using namespace std;

int BinarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x;cout<<"Enter the element to be Searched : ";cin>>x;
  int n = sizeof(array) / sizeof(array[0]);
  int res = BinarySearch(array, x, 0, n - 1);
  if (res == -1)
    printf("Element Not found in the list");
  else
    printf("Element is found at the index No : %d", res);
}
