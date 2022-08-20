#include <stdio.h>

void bubbleSort(int *data, int n) {
    for (int k = 1; k <= n - 1; k++) {
        int ptr = 0;
        while (ptr <= n - k) {
            if (data[ptr] > data[ptr + 1]) {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
            ptr = ptr + 1;
        }
    }
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    return 0;
}