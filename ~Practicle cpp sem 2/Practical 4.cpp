/*Write a menu driven program to perform string manipulation (without using inbuilt string functions):
a. Show address of each character in string
b. Concatenate two strings.
c. Compare two strings
d. Calculate length of the string (use pointers)
e. Convert all lowercase characters to uppercase
f. Reverse the string
g. Insert a string in another string at a user specified position*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Function to show address of each character in string
void  show_address(const char* str) {
    cout << "Address of each character in the string: " << endl;
    for (int i = 0; str[i] != '\0'; ++i) {
        cout << "Character: " << str[i] << ",Address" << static_cast<const void*>(&str[i]) << endl;
    }
}

// Function to concatenate two strings
void concatenate_strings(char* str1, const char* str2) {
    strcat(str1, str2);
}

// Function to compare two strings
int compare_strings(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

// Function to calculate length of the string using Pointer
int calculate_length(const char* str) {
    const char* ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

// Function To convert all lowecase characters to uppercase
void convert_to_uppercase(char* str) {
    for (int i = 0; str [i] != '\0'; ++i) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

// Function to reverse the string
void reverse_string(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        swap(str[i], str[length - i - 1]);
    }
}

// Functionm to insert a string in another string at a user-specified position
void insert_string(char* str, const char* substr, int pos) {
    int len = strlen(str);
    int sub_len = strlen(substr);

    if (pos < 0 || pos > len) {
        cout << "Invalid Position " << endl;
        return;
    }

    for (int i = len - 1; i >= pos; --i) {
        str[i + sub_len] = str[i];
    }

    for (int i = 0; i < sub_len; ++i) {
        str[pos + i] = substr[i];
    }
}

int main() {
    char str1[100], str2[100], substr[100];
    int choice, pos;

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    while (true) {
        cout << "\nString Manipulation Menu:" << endl;
        cout << "1. Show address of each character in string" << endl;
        cout << "2. Concatenate two strings" << endl;
        cout << "3. Compare two strings" << endl;
        cout << "4. Calculate length of the string" << endl;
        cout << "5. Convert all lowercase characters to uppercase" << endl;
        cout << "6. Reverse the string" << endl;
        cout << "7. Insert a string in another string at a user specified position" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            show_address(str1);
            break;
        
        case2:
            cout << "Enter the second string to concatenate: ";
            cin.ignore();
            cin.getline(str2, 100);
            concatenate_strings(str1, str2);
            cout << "Concatenate string: " << str1 << endl;
            break;

        case 3:
            cout << "Enter the second string to compare: ";
            cin.ignore();
            cin.getline(str2, 100);
            if  (compare_strings(str1, str2) == 0) {
                cout << "Strings are equal " << endl;
            }
            else {
                cout << "Strings are not equal "<< endl;
            }
            break;

        case 4:
            cout << "Length of the string: " << calculate_length(str1) << endl;
            break;
        
        case 5:
            cout << "String converted to uppercase: " << str1 << endl;
            break; 

        case 6:
            reverse_string(str1);
            cout << "Reversed string: " << str1 << endl;
            break;
        
        case 7:
            cout << "Enter the string to insert: ";
            cin.ignore();
            cin.getline(substr, 100);
            cout << "Enter the position to insert: ";
            cin >> pos;
            insert_string(str1, substr, pos);
            cout << "Modified string: " << str1 << endl;
            break;

        case 8:
            cout << "Exiting program " << endl;
            return 0;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 8" << endl;
            break;
        }
    }
    return 0;
}