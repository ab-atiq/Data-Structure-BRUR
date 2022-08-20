#include <stdio.h>

// int main() {
//     ///           0  1  2  3  4
//     int arr[5] = {1, 2, 3, 7, 9};
//     int search = 2;
//     for (int i = 0; i <= 4; i++) {
//         if (search == arr[i]) {
//             printf("%d found at index %d\n", search, i);
//             return 0;
//         }
//     }
//     printf("%d not found\n", search);
//     return 0;
// }

// using while loop
int main() {
    ///           0  1  2  3  4
    int arr[5] = {1, 2, 3, 7, 9};
    int search = 2;
    int i = 0;
    while (i <= 4) {
        if (search == arr[i]) {
            printf("%d found at index %d\n", search, i);
            return 0;
        }
        i++;
    }
    printf("%d not found\n", search);
    return 0;
}