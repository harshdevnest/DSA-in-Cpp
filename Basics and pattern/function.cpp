#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name (CAPITAL letters only): ";
    cin >> name;

    for(int row = 0; row < 5; row++) {
        for(char ch : name) {
            switch(ch) {

                case 'H':
                    cout << "*   * ";
                    break;

                case 'A':
                    if(row == 0) cout << " ***  ";
                    else if(row == 2) cout << "***** ";
                    else cout << "*   * ";
                    break;

                case 'R':
                    if(row == 0 || row == 2) cout << "****  ";
                    else if(row == 1) cout << "*   * ";
                    else if(row == 3) cout << "*  *  ";
                    else cout << "*   * ";
                    break;

                case 'S':
                    if(row == 0 || row == 2 || row == 4) cout << "****  ";
                    else if(row == 1) cout << "*     ";
                    else cout << "    * ";
                    break;

                default:
                    cout << "      ";
            }
        }
        cout << endl;
    }
    return 0;
}