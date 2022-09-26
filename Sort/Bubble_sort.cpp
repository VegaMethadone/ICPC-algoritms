#include <iostream>

using namespace std;

int main() {
    int size, i;
    cin >> size;
    
    int str[size];
    
    while(i < size){
        cin >>size[i++];
    }  
       
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
