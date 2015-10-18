int solution(int A[], int N) {
    int i;
    long right_sum, left_sum;
    long min_diff, comparison_diff;
    
    if(N < 2)
        return 0;
    else if (N == 2)
        return abs(A[0] - A[1]);
    
    for(i = 1; i < N; i++){
            right_sum += A[i];

    left_sum = A[0];
    min_diff = abs(left_sum - right_sum);
    
    for(i=1; i < N - 1; i++){
        right_sum -= A[i];
        left_sum += A[i];
        comparison_diff = abs(left_sum - right_sum);
        if(min_diff > comparison_diff)
            min_diff = comparison_diff;
    }
    
    return min_diff;
}
