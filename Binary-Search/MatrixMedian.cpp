//https://www.interviewbit.com/problems/matrix-median/

int Solution::findMedian(vector<vector<int> > &A) {
    int min = INT_MAX , max = INT_MIN;
    int r = A.size();
    int c = A[0].size();
    for(int i=0; i<r; i++){
        if(min > A[i][0])
            min = A[i][0];
        
        if(max < A[i][c-1])
            max = A[i][c-1];
    }
    
    int noOfElementsLessThanMedian = (r*c + 1)/2;
    while(min < max){
        int mid = min + (max - min)/2;
        int place = 0;
        
        for(int i=0; i < r; i++)
            place += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        if(place < noOfElementsLessThanMedian)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
    
}
