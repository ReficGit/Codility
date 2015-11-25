int solution(int X, int Y, int D) {
    long dist = Y - X;
    long jumps = dist/D;    
    
    if(X==Y)
        return 0;
    
    if(dist%D == 0)
        return (jumps);
    else
        return (jumps+1);
}
