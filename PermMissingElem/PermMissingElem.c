int solution(int A[], int N) {
    long range = N + 1;
    long i;
    
    if(N == 0)
        return 1;
    for(i = 0; i < N; i++)
        range ^= A[i] ^ (i+1);
    return range;
}
