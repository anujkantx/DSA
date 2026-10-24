class Solution {
  public:
    
    void str(int n, string word, vector<string>& ans){
        if(n==0){
            ans.push_back(word);
            return;
        }
        str(n-1, word+"0", ans);
        str(n-1, word+"1", ans);
    }
    
    vector<string> binstr(int n) {
        vector<string> ans;
        str(n, "", ans);
        return ans;
    }
};