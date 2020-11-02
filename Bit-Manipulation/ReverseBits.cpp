//https://www.interviewbit.com/problems/reverse-bits/

unsigned int Solution::reverse(unsigned int A) {
    int result = 0;
    for(int i=0; i<32; i++){
        int bit = A & 1;
        result = ( result << 1 ) + bit;
        A = A >> 1;
    }
    return result;
}
