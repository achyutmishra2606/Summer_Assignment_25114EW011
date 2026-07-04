//Find diagonal sum

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int a[n][n];
    cout << "Enter elements:\\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int primaryDiag = 0, secondaryDiag = 0;
    for (int i = 0; i < n; i++) {
        primaryDiag += a[i][i];
        secondaryDiag += a[i][n - i - 1];
    }
    cout << "Primary diagonal sum = " << primaryDiag << endl;
    cout << "Secondary diagonal sum = " << secondaryDiag << endl;
    return 0;
}