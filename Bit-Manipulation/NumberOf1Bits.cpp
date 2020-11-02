//https://www.interviewbit.com/problems/number-of-1-bits/

int Solution::numSetBits(unsigned int A) {
    int count = 0;
    for(int i=0; i<32; i++){
        count += A & 1;
        A = A >> 1;
    }
    return count;
    
}
