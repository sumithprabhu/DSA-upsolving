//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function    
    int sum =(*a + *b);
    int abs1 = abs(*a - *b);
    *a=sum;
    *b=abs1;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}