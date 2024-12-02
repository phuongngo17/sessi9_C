#include <stdio.h>

int main() {
    int arr[100];
    int n; 
    int currentLength; 

    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    currentLength = n;

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int value, addIndex;

    printf("Nhap vao gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vao vi tri muon them (0 den %d): ", 100 - 1);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le. nhap vi tri tu 0 den %d.\n", 100 - 1);
    } else {
        if (addIndex >= currentLength) {
            arr[addIndex] = value;
            currentLength = addIndex + 1;
        } else {
            for (int i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i - 1];
            }
            arr[addIndex] = value;
            currentLength++;
        }

        printf("Mang sau khi them phan tu:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

