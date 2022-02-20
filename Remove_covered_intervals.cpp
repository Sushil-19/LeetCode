class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
        int res = 0,left=-1,right=-1;
        sort(a.begin(),a.end());
        
        for (auto &v : a){
            if (v[0] > left & v[1]>right){
                left = v[0];
                ++res;
                
            }
            right = max(right,v[1]);
        }
        return res;
    }
};
