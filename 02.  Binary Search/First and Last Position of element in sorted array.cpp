class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
			int n = nums.size();
			vector<int>ans;
        int start=0;
				int end = n -1;
				int res=-1;
				while(start<=end){
					int mid = start + (end-start)/2;
					if(nums[mid]==target){
						res = mid;
						end = mid - 1;
					}
					else if(nums[mid] > target){
						end =mid - 1;
					}
					else{
						start = mid + 1;
					}
				}
					ans.push_back(res);
					res=-1;
					start=0;
					end = n - 1;
					while(start<=end){
						int mid = start + (end - start)/2;
						if(nums[mid]==target){
						res = mid;
						start = mid + 1;
					}
					else if(nums[mid] > target){
						end =mid - 1;
					}
					else{
						start = mid + 1;
					}
					}
					ans.push_back(res);
					return ans;
				
    }
};
