class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> answer;

        int n = nums.size();
        sort(nums.begin(), nums.end());


        for(int i = 0; i<n; i++){
            int low = i+1;
            int high = n - 1;

            while(low < high){

            

            if((nums[i] + nums[low] + nums[high]) > 0){
                high--;
            }
            else if((nums[i] + nums[low] + nums[high]) < 0){
                low++;
            }
            else{
                vector<int> temp = {nums[i], nums[low], nums[high]};
                answer.push_back(temp);

                while(low < high && nums[low] == temp[1]){
                    low++;

                }
                while(low < high && nums[high] == temp[2]){
                    high--;

                }


            }
            }

            }
            while(i + 1 < num.size() && num[i + 1] == num[i]){
                i++;
            }

            return answer;


        }

        
        








        // Brute force: sort, Use 3 loops, store the array values in set, push set to vector<vector<int>>
        // Better: sort, Use 2 pointers, increment low ptr if sum is -ve, decrement high ptr if sum is +ve, push to set if 0
        // Best: same as above, just process duplicates using ptrs instead of hash set

        
    }
};