#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somatorio (int i ) {
    if (i==0) {
        return i;
    }
    else if (i == 1) {
        return i;
    }
    else {
     return (i-1)+(i-2);
    }
}


int main () {
    int i;
    int x;

    scanf ("%d", &x);

    for (i=0;i < x ;i++) {
        printf ("%d ", somatorio (i));
    }

    return 0;
}
