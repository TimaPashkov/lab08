#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    int count1 = 0;
    for (int i = 0; i < (int)v.size(); i++) {
        if (v.size() < 6) {
            v.push_back(0);
        }
        count1++;
    }
    cout << "for:  шагов " << count1 << endl;

    vector<int> w = {10, 20, 30};
    int count2 = 0;
    {
        int __i = 0, __n = w.size();
        for (const int &i = __i; i < __n; __i++) {
            if (w.size() < 6) {
                w.push_back(0);
            }
            count2++;
        }
    }
    cout << "forc: шагов " << count2 << endl;
    return 0;
}
