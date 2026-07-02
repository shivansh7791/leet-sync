class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        int consCount = 0;
        for ( int i = 0; i < n; i++ ){
            if( nums[i] == 1 ) {
                consCount++;
            }
            else{
                st.insert(consCount);
                consCount = 0;
            }
            st.insert( consCount );
        }
        auto it = max_element( st.begin(), st.end() );
        return *it;
    }
};