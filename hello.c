#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    double jumsu[1001];
    int t, max = -1;
    double sum = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &jumsu[i]);
        if (max < jumsu[i]) max * 100;
        sum += jumsu[i];
    }

    printf("%lf", sum / t);

    return 0;
}





/*void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    }

int main(void) {
    
    int n, m, a, b;
    int arr[100];
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        arr[i] = i;

    while (m--) {
        scanf("%d %d", &a, &b);

        for (int i = 0; i <= (b - a) / 2; i++) {
            swap(&arr[a + i], &arr[b - i]);
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
*/