class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rQueue, dQueue;
        int n = senate.size();

        // Fill queues with initial indices
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R') rQueue.push(i);
            else dQueue.push(i);
        }

        // Process rounds
        while (!rQueue.empty() && !dQueue.empty()) {
            int r = rQueue.front(); rQueue.pop();
            int d = dQueue.front(); dQueue.pop();

            // Whichever index smaller bans the other
            if (r < d) {
                rQueue.push(r + n); // Radiant survives to next round
            } else {
                dQueue.push(d + n); // Dire survives to next round
            }
        }

        return rQueue.empty() ? "Dire" : "Radiant";
    }
};
