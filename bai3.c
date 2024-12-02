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

    int delIndex;

    printf("Nhap vao vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &delIndex);

    if (delIndex < 0 || delIndex >= currentLength) {
        printf("Vi tri khong hop le. nhap vi tri tu 0 den %d.\n", currentLength - 1);
    } else {
        for (int i = delIndex; i < currentLength - 1; i++) {
            arr[i] = arr[i + 1];
        }
        currentLength--;

        printf("M?ng sau khi xóa ph?n t?:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

