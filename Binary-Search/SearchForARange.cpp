//https://www.interviewbit.com/problems/search-for-a-range/

int bsLeft(const vector<int> &A, int B){
    int low = 0;
    int high = A.size()-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(A[mid]==B){
            if(mid == 0 || A[mid-1]!=B)
                return mid;
            else
                high = mid - 1;
        }
        else if(A[mid] > B)
            high = mid -1;
        else if(A[mid] < B)
            low = mid + 1;
    }
    return -1;
}

int bsRight(const vector<int> &A, int B){
    int low = 0;
    int high = A.size()-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(A[mid]==B){
            if(mid == (A.size() - 1) || A[mid+1]!=B)
                return mid;
            else
                low = mid + 1;
        }
        else if(A[mid] > B)
            high = mid -1;
        else if(A[mid] < B)
            low = mid + 1;
    }
    return -1;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
 
    int left = bsLeft(A,B);
    int right = bsRight(A,B);
    vector<int> ans;
    ans.push_back(left);
    ans.push_back(right);
    return ans;
}
