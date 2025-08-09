class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        int curr=0;
        int high=0;
        for(int i=0;i<n;i++){
            curr+=gain[i];
            high=max(high,curr);
        }
        return high;
    }
};