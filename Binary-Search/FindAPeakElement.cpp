//https://www.interviewbit.com/problems/find-a-peak-element/

int Solution::solve(vector<int> &A) {
    int low = 0, high = A.size() - 1;
    int size = A.size();
    while(low <= high){
        int mid = low + (high - low)/2;
        if(A[mid] >= A[(mid+1)%size] && A[mid] >= A[(mid-1)%size])
            return A[mid];
        
        else if(A[mid] >= A[(mid-1)%size] && A[mid] <= A[(mid+1)%size])
            low = mid + 1;
        else if(A[mid] <= A[(mid-1)%size] && A[mid] >= A[(mid+1)%size])
            high = mid - 1;
        else
            break;
    }
    
}
