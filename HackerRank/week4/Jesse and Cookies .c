int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int cookies(int k, int A_count, int* A) {
    int ops = 0;

    while (1) {
        qsort(A, A_count, sizeof(int), cmpfunc);

        if (A[0] >= k) return ops;       // smallest already >= k
        if (A_count < 2) return -1;      // not enough cookies to combine

        // combine the two least sweet
        int new_cookie = A[0] + 2 * A[1];

        // shift elements left
        for (int i = 2; i < A_count; i++) {
            A[i - 2] = A[i];
        }
        A_count -= 1;   // size decreases
        A[A_count - 1] = new_cookie; // put new cookie at end
        ops++;
    }
}
