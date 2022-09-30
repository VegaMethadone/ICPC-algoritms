#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        a[i] = rand() % 100;
    }

    int num;
    cin >> num;
    int l = -1, r = a.size() - 1;
    while (l + 1 < r){
        int m = (l + r) / 2;
        if(a[m] <  num){                      // (<) LowerBount - элемент <=;  Один и тот же эоеие
            l = m;                            // (<=) UpperBount - элемент >;
        }
        else{
            r = m;
        }
    }

    cout << "index is: " << r << "\n";
}
