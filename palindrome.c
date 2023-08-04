    #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x);

int main () {
    bool ans;
    int x;

    printf ("Enter a number: ");
    scanf ("%d", &x);

    ans = isPalindrome(x);

    if (ans == true) {
        printf ("\ntrue\n");
    }

}

bool isPalindrome(int x){
    int i, j;
    double num = 0;
    bool ans;

    for (i = x; i > 0; i = i/10) {
        j = i % 10;
        num = (num * 10) + j;
    }

    if (x == 0) {
        ans = true;
    }
    else if (num == x) {
        ans = true;
    }
    else {
        ans = false;
    }

    return ans;
}
