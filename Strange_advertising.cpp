#include <iostream>
using namespace std;

int viralAdvertising(int n) {
    int sum = 0 , last_sum = 5 / 2;
    for (int i = 0; i < n; i++) {
        sum += last_sum;
        last_sum = last_sum * 3 / 2;
    }
    return sum;
}

int main()
{
    int n;
    int rez;
    cin >> n;
    rez = viralAdvertising(n);
    cout << rez;
    return 0;
}
