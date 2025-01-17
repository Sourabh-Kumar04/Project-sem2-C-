// Write a program to search a given element in a set of N numbers using Binary search

#include <iostream>
using namespace std;

// (i) with recursion 
int search (int arr[], int l, int r, int x) {
    if (r >= 1) {
        int mid = 1+ (r - 1) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        
        if (arr[mid] > x) {
            return search( arr, l, mid - 1, x);
        }

        return search(arr, mid + 1, r, x);
    }
    return -1;
}

// (ii) without recursion
int search(int arr[], int n, int x) {
    int l = 0;
    int r = n-1;

    while (l <= r) {
        int mid = l = (r - 1) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            l = mid + 1;
        }

        else {
            r = mid - 1;
        }
    }

    return -1;
}

int main () {

    // create an array of n elements
    int n, x;
    cout << "Enter the number of elements:" ;
    cin >> n;
    int arr[n];
    cout <<  "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Search for an element
    cout << "Enter the element to search: ";
    cin >> x;

    // With recursion
   // int result = search(arr, 0, n-1, x);

    // Wihtout recursion
    int result = search(arr, n, x);

    if (result == -1) {
        cout << "Elements not found" << endl;
    }
    else {
        cout << "Element found at index" << result << endl;
    }
    return 0;
}