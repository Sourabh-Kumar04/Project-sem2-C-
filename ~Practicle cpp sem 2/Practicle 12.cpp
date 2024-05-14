// copy the contents of one text file to another file, after removing all whitespaces

#include <iostream>
#include <fstream>
using namespace std;

int  main() {

    ifstream file;
    file.open("file1.txt", ios::in);

    ofstream file2;
    file2.open("file2.txt", ios::out);

    char ch;
    while (file.get(ch)) {
        if (ch != ' ' && ch != '\n') {
            file2.put(ch);
        }
    }

    file.close();
    file2.close();

    return 0;
}