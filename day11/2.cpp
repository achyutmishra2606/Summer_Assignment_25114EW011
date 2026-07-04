//Function to find maximum

#include <iostream>
using namespace std;
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum = " << findMax(a, b) << endl;
    return 0;
}