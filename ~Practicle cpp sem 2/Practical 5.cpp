// Write a program to merge two ordered arrays to get a single ordered array.

#include <iostream>
using namespace std;

void mergeArrays (int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    //compare elements from both arrays and puts the samller one into the result array
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        }
        else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If amy array are left in either array, add them to the result array
    while (i < size1) {
        result[k] = arr1[i];
        i++;
        j++;
    }

    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }

}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 20};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result [size1 + size2];

    mergeArrays(arr1, arr2, size1, size2, result);

    cout << "Merge array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}