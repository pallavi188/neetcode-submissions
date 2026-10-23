class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        //priority queue min heap to store the k most frequent elements at   the top
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &it:mp){
            int val = it.first;
            int freq = it.second;
            pq.push({freq,val});
            if(pq.size()>k)pq.pop();
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
