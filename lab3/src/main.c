#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 101 - 50;
}

void custom(int n, int a[]){
    int min, max, imin, imax;
    min = 51;
    max = -51;
    for (int i = 0; i<n;i++){
        if (a[i]<min){
            min = a[i];
            imin = i;
        }if(a[i]>max){
            max = a[i];
            imax = i;
        }
    }
    if (min<0){min = -min;}
    if (max<0){max = -max;}
    int s = imin+imax;
    if (s<min||s>max){
        a[imin] = s;
        a[imax] = s;
    } else {
        int c;
        if(imin>imax){
            c = imin;
            imin = imax;
            imax = c;
        }
        for (int i = imin + 1; i < imax; i++){
            a[i] = 0;
        }
    }
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int i;
    for (i = 0; i < n; i++){
        printf("%4d", A[i]);}
    printf("\n");
    custom(n, A);
    for (i = 0; i < n; i++){
        printf("%4d", A[i]);}
    printf("\n");
    return 0;
}
