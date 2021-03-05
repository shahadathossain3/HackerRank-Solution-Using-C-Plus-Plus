#include <iostream>

using namespace std;

int main() {
  int n, i;
  cin >> n;
  int arr[n], arr1[n];
  for (i = 0; i < n; i++) {
    cin >> arr[i];

    arr1[i] = arr[i];
  }
  for (i = n - 1; i >= 0; i--) {

    cout << arr1[i] << " ";
  }
  return 0;
}
