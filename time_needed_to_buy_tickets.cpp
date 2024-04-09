class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int time = 0, n = tickets.size();

        for(int i=0; i<n; i++){
            if(i <= k)
                time += min(tickets[i], tickets[k]);
            else
                time += min(tickets[i], tickets[k] - 1); // k - 1 because the person goes at the back after buying 1 ticket and taking 1 second
        }

        return time;
    }
};
