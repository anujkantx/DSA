class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> neg;
        int j=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=0){
                arr[j]=arr[i];
                j++;
            }else{
                neg.push_back(arr[i]);
            }
        }
        
        for(int i=j; i<n; i++){
            arr[i]=neg[i-j];
        }
    }
};