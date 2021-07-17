#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void plusMinus(vector<int> arr) {
    int c_positive = 0, c_negative = 0, c_zero = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) { c_positive++; }
        else if (arr[i] < 0) { c_negative++; }
        else { c_zero++; };
    }
    cout << setprecision(6) << double(c_positive) / double(size) << endl;
    cout << setprecision(6) << double(c_negative) / double(size) << endl;
    cout << setprecision(6) << double(c_zero) / double(size) << endl;
}

int main()
{
    int n;
    int temp;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    plusMinus(arr);

    return 0;
}
