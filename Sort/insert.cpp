#include <iostream>


using namespace std;


int main()
{
   int n;
   cin >> n;

   int a[n];

   for(int i = 0; i < n; ++i){
        a[i] = rand() % 100;
   }

    for(int i = 1; i < n; ++i){ // Insert
        for(int j = i; j > 0 && a[j - 1] > a[j]; --j){ // Insert
            swap(a[j - 1], a[j]); // Insert
        }
    }
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
}
