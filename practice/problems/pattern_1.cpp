#include <iostream>
using namespace std;

int main() {

    int N;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        int pattern[i];
        for (int j = 0; j < i; j++) {
            cout << 1;
        }
        cout << endl;
    }

    return 0;
}