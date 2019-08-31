//
// Created by Pankaj Patidar on 31/08/19.
//

#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function
    int sum=*a + *b;
    int diff=(*a - *b)>0?*a - *b:-(*a - *b);
    *a = sum;
    *b = diff;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

