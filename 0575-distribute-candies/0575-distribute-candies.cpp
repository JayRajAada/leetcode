class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueCandies;
        int limit = candyType.size() / 2;
        for (int candy : candyType) {
            uniqueCandies.insert(candy);
            if (uniqueCandies.size() == limit) {
                return limit;
            }
        }
        return uniqueCandies.size();
    }
};