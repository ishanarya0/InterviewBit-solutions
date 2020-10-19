int Solution::search(const vector<int> &A, int B) {
    int low = 0;
    int high = A.size() - 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B)
            return mid;
        
        if(A[low] < A[mid]){
            if(A[low]<= B && A[mid] > B)
                high = mid - 1;
            else
                low = mid + 1;
            
            continue;
        }
        else if(A[mid] < A[high]){
             if(A[high]>= B && A[mid] < B)
                low = mid + 1;
            else
                high = mid - 1;
        }
        else
            return -1;
    }
    return -1;
}
