// Write a program to remove the duplicate from an array.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> remove_duplicate(vector<int>& arr) {
    unordered_set<int> unique_elements;
    vector<int> result;

    for (int num : arr) {
        if (unique_elements.find(num) == unique_elements.end()) {
            result.push_back(num);
            unique_elements.insert(num);
        }
    }

    return result;
}

int main () {
    vector<int> arr = {1, 2, 4, 5, 6, 7};
    vector<int> unique_arr = remove_duplicate(arr);

    cout << "Array after removing duplicates: " ;
    for (int num : unique_arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;

}