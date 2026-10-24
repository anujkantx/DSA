class Solution {
  public:
    bool check(vector<int>& arr, int n, int i){
        if(i==n-1){
            return true;
        }
        if(arr[i]>arr[i+1]){
            return false;
        }else{
            return check(arr, n, i+1);
        }
    }
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        return check(arr, n, 0);
        
    }
};