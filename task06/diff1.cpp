#include <iostream>
using namespace std;

int main() {
    int n = 10;

    cout << "for:   ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "forc:  ";
    {
        int __i = 0, __n = n;
        for (const int &i = __i; i < __n; __i++) {
            cout << i << " ";
            // i++;
        }
    }
    cout << endl;
    return 0;
}
