#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int index, new_value;
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (0 den %d): ", size - 1);
    scanf("%d", &index);

    if (index >= 0 && index < size) {
        printf("Nhap gia tri moi: ");
        scanf("%d", &new_value);

        array[index] = new_value;

        printf("Mang sau khi sua: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri khong hop le \n");
    }

    return 0;
}

