#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    int sum = 0;

    for (int k = 0; k < n * m; k++) {
        int i = k / m;
        int j = k % m;
        cin >> a[i][j];
        sum += a[i][j];
    }

    cout << "Сумма элементов: " << sum << endl;
    return 0;
}
