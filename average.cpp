#include <iostream>
#include <cstdlib>

using namespace std;

int main(int a, char* b[]) {
    if (a < 2) {
        cout << "Please input numbers to find average." << endl;
        return 0;
    }

    double sum = 0;
    int count = a - 1;

    for (int i = 1; i < a; i++) {
        sum += atof(b[i]);
    }

    double average = sum / count;

    cout << "---------------------------------" << endl;
    cout << "Average of " << count << " numbers = " << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}