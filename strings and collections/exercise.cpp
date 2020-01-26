#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1;
    string str2;
    bool restart = true;
    int repeat;

    while(repeat) {
        cout << "Enter the first string: " << endl;
        cin >> str1;
        cout << "Enter the second string: " << endl;
        cin >> str2;

        int str1Len = str1.length();
        int str2Len = str2.length();

        if (str1Len == str2Len) {
            cout << "Both strings have the same length" << endl;
        } else if (str1Len > str2Len) {
            cout << "String 1 is longer" << endl;
        } else {
            cout << "String 2 is longer" << endl;
        }


        cout << "Try again? Input 0 for no." << endl;
        cin >> repeat;
        if (repeat == 0) {
            restart = false;
        }
    }

    return 0;

}
