#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void mergeSort(vector<int> &arr)
{
    int N = arr.size();
    if (N <= 1) return;

    vector<int> left;
    vector<int> right;

    for(int i = 0; i < N/2; ++i){
        left.push_back(arr[i]);
    }
    for(int i = N/2; i < N; ++i){
        right.push_back(arr[i]);
    }
    mergeSort(left);
    mergeSort(right);

    merge(left.begin(), left.end(), right.begin(), right.end(), arr.begin());

}


int main()
{
    int n, i;
    cin >> n;

    vector<int> arr(n);
    while(i < n){
        cin >> arr[i++];
    }

    mergeSort(arr);

    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
}
