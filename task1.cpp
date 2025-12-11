#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 9};
    int n = 10;

    int result[10];      
    int resultSize = 0;  

    for (int i = 0; i < n; i++) {
        bool exists = false;

        for (int j = 0; j < resultSize; j++) {
            if (arr[i] == result[j]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            result[resultSize] = arr[i];
            resultSize++;
        }
    }

    for (int i = 0; i < resultSize; i++) {
        cout << result[i];
        if (i != resultSize - 1) cout << ", ";
    }

    return 0;
}
