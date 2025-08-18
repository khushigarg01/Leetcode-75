class RecentCounter {
    vector<int> req;
public:
    RecentCounter() {}
    
    int ping(int t) {
        req.push_back(t);
        int cnt = 0;
        for (int x : req) {
            if (x >= t - 3000 && x <= t) cnt++;
        }
        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */