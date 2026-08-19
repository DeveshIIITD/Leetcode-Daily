class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mpp;
        for (int i = 0; i < jewels.size();i++){
            mpp.insert(jewels[i]);
        }
        int cnt = 0;
        for(int i = 0; i < stones.size();i++){
            if(mpp.find(stones[i]) != mpp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};
