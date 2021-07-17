#include <iostream>
#include <iomanip>

using namespace std;

void staircase(int n) {
    string str = "#";
    for (int i = 0; i < n; i++) {
        cout << setw(n) << right << str;
        str += "#";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
