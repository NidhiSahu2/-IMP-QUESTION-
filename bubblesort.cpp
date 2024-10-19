// C++ Program to sort an array using bubble sort
#include <bits/stdc++.h>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
          
            // Swap if the element found is
          	// greater than the next element
            if (arr[j] > arr[j + 1]) 
                swap(arr[j],arr[j+1]);
        }
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort arr using bubble sort
    bubbleSort(arr, n);

    for (auto i : arr)
        cout << i << " ";

    return 0;
}

