//https://www.interviewbit.com/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &A, int B) {
    int low =0, high = A.size() - 1;
    
    while(low <= high){
        int mid = low + (high-low)/2;
        if(A[mid] == B)
            return mid;
        
        if(A[mid] < B)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
