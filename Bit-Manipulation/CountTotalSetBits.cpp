//https://www.interviewbit.com/problems/count-total-set-bits/

int Solution::solve(int A) {
    int mod = 1000000007;
    A = A+1;
    int count = 0;
    for(int i=0; i<32; i++){
        int powoftwo = pow(2,i);
        if(powoftwo > A)
            break;
        int zeroonepair = A / powoftwo;
        count= (count + (((zeroonepair/2) % mod) * (powoftwo % mod)) % mod) % mod;
        if(zeroonepair % 2 == 1)
            count= (count + A%powoftwo) % mod;
    }
    return count;
}
