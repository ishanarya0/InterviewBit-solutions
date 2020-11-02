//https://www.interviewbit.com/problems/min-xor-value/

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int XOR = INT_MAX;
    for(int i=0; i< A.size() - 1; i++){
        int temp = A[i]^A[i+1];
        if( XOR > temp )
            XOR = temp;
    }
    return XOR;
}
