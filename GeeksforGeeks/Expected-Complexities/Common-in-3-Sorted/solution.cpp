class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        int m = a.size();
        int n = b.size();
        int o = c.size();
        vector<int> ans;
        int i=0;
        int j=0;
        int k=0;
        int last = INT_MAX;
        
        while(i<m && j<n && k<o){
            if(a[i]==b[j] && b[j]==c[k] && last != a[i]){
                ans.push_back(a[i]);
                last = a[i];
                i++; 
                j++; 
                k++;
            }else{
                if(a[i]<b[j] || a[i]<c[k]){
                     i++;
                }else if(b[j]<a[i] || b[j]<c[k]){
                     j++;
                }else{
                    k++;
                }
                
            }
        }
        
        return ans;
        
    }
};