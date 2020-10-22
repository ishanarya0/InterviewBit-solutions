//Given an sorted array of integers, every element appears twice except for one. Find that single one.

int Solution::solve(vector<int> &A) {
    int low = 0, high = A.size();
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid == 0 || mid == A.size()-1)
            return A[mid];
        if(A[mid-1]<A[mid] && A[mid] <A[mid+1] )
            return A[mid];
        if(mid%2 == 0){
            if(A[mid+1] == A[mid])
                low = mid+2;
            else
                 high = mid-2;
        }
        else{
            if(A[mid]==A[mid+1])
                high = mid - 1;
            else
                low = mid+1;
        }
    }
}