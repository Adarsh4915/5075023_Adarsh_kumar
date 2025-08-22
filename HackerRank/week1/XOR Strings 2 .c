#include <stdio.h>
#include <string.h>

int main() {
    char s[10001], t[10001], res[10001];
    scanf("%s", s);
    scanf("%s", t);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[n] = '\0'; // null-terminate the result string

    printf("%s\n", res);

    return 0;
}
