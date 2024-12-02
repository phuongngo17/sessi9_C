#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int arr[], int *length) {
    int n;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);

    *length = n;
    printf("Nhap  vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int length) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *length) {
    int value, index;
    printf("Nhap vao gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vao vi tri muon them (0 den %d): ", MAX_SIZE - 1);
    scanf("%d", &index);

    if (index < 0 || index >= MAX_SIZE) {
        printf("Vi tri khong hop le. nhap vi tri tu 0 den %d.\n", MAX_SIZE - 1);
    } else {
        if (index >= *length) {
            arr[index] = value;
            *length = index + 1;
        } else {
            for (int i = *length; i > index; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            (*length)++;
        }
    }
}

void suaPhanTu(int arr[], int length) {
    int value, index;
    printf("Nhap vao vi tri muon sua (0 den %d): ", length - 1);
    scanf("%d", &index);

    if (index < 0 || index >= length) {
        printf("Vi tri khong hop le. nhap vi tri tu 0 den %d.\n", length - 1);
    } else {
        printf("Nhap vao gia tri moi: ");
        scanf("%d", &value);
        arr[index] = value;
    }
}

void xoaPhanTu(int arr[], int *length) {
    int index;
    printf("Nhap vao vi tri can xoa (0 den %d): ", *length - 1);
    scanf("%d", &index);

    if (index < 0 || index >= *length) {
        printf("Vi tri khong hop le.nhap vi tri tu 0 den %d.\n", *length - 1);
    } else {
        for (int i = index; i < *length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*length)--;
    }
}

int main() {
    int arr[MAX_SIZE];
    int length = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &length);
                break;
            case 2:
                hienThiMang(arr, length);
                break;
            case 3:
                themPhanTu(arr, &length);
                hienThiMang(arr, length);
                break;
            case 4:
                suaPhanTu(arr, length);
                hienThiMang(arr, length);
                break;
            case 5:
                xoaPhanTu(arr, &length);
                hienThiMang(arr, length);
                break;
            case 6:
                printf("Thoot chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 6);

    return 0;
}

