//https://www.interviewbit.com/problems/matrix-search/

int checkRowBS(vector<vector<int> > &A, int i, int cols, int B){
    int low = 0;
    int high = cols -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(A[i][mid] == B)
            return 1;
        
        else if(B < A[i][mid])
            high = mid - 1;
        else if(B > A[i][mid])
            low = mid + 1;
    }
    return 0;
}

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int low = 0, high = A.size() - 1;
    int cols = A[0].size();
    while(low <= high){
        int mid = low + (high - low)/2;
        if(B>= A[mid][0] && B<= A[mid][cols-1])
            return checkRowBS(A, mid, cols,B);
            
        else if (B > A[mid][cols-1])
            low = mid + 1;
        else if(B < A[mid][0])
            high = mid - 1;
    }
    return 0;
}


