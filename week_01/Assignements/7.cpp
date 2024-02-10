void removeElement(int arr[], int n, int value) {
  int i, j;

  // Search loop
  for (i = 0; i < n; i++) {
    if (arr[i] == value) {
      break;
    }
  }

  // If element is found
  if (i < n) {
    // Shifting loop
    for (j = i; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }
    // Decrement array size
    n--;
  }
}
