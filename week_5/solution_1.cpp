#include <stdio.h>
#include<cmath>
void update(int *a,int *b) {
    // Complete this function    
    *a=abs(*a+*b);
    *b=abs(*a-*b*2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
