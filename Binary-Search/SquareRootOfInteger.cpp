//https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int A) {
    if(A==0)
        return 0;
    int low = 1;
    int high = 46340;
    int mid;
    while(low<=high){
         mid = low + (high-low)/2;
        int prod = mid*mid;
        if(prod == A)
            return mid;
        else if(prod > A)
            high = mid -1;
        else
            low = mid+1;
    }
    if(mid*mid > A)
        return mid-1;
    else
        return mid;
    
}

