#include <iostream>

using namespace std;

int main() {
    int x;
    int row = 1;
    int column;
    
    cout << "Enter the X (more than 1) : ";
    cin >> x;
    
    while (row <= x) {
        column = 1;
        while (column <= x) {
            if (row == 1) {
                cout << "*";
                column++;
            } else if ((row > 1) && (row < x)) {
                if (column == 1) {
                    cout << "*";
                    column++;
                } else if ((column > 1) && (column < x)) {
                    cout << " ";
                    column++;
                } else {
                    cout << "*";
                    column++;
                }
            } else {
                cout << "*";
                column++;
            }
        }
        cout << endl;
        row++;

    }
    return 0;
}
