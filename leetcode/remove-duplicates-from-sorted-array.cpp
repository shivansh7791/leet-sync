class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 2 pointer approach - we initialise i ( as array is sorted ) at nums[0] and j at i + 1 - we keep checking whether j is different than i, If it is nums[i+1] = j; i++ - we return i + 1 that will be the index  
        
        int i = 0;
        for( int j = 1; j < nums.size(); j++ ){
            if( nums[ j ] != nums[ i ] ){
                nums[ i + 1 ] = nums[ j ];
                i++;
            }
        }
        return i + 1;
    }
};