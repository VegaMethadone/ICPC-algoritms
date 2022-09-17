#include <iostream>

using namespace std;

int main() {
    int str[17];

    str[0] = 92;
    str[1] = 32;
    str[2] = 34;
    str[3] = 53;
    str[4] = 12;
    str[5] = 53;
    str[6] = 75;
    str[7] = 24;
    str[8] = 75;
    str[9] = 24;
    str[10] = 78;
    str[11] = 67;
    str[12] = 99;
    str[13] = 67;
    str[14] = 12;
    str[15] = 43;
    str[16] = 55;

    int size = 16;
    int tmp;
    int bypass = 0;

    for(int i = 0; i < size; ++i) {
        cout << str[i] << " ";
    }
    cout << "\n";
    cout << "Original massive \n" ;

    for (bypass; bypass < size; ++bypass) {
        for(int i = 0; i < size - bypass; ++i) {
            if (str[i] > str[i + 1]) {
                tmp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = tmp;
            }
        }
    }

    cout << "\n";
    cout << "Sorted massive \n" ;

    for(int i = 0; i < size; ++i) {
        cout << str[i] << " ";
    }
}
