public class Solution {
    public int maxSubArray(int[] nums) {
        // Initialize currentSum and maxSum to the first element of the array
        int currentSum = nums[0];
        int maxSum = nums[0];
        
        // Iterate over the array starting from the second element
        for (int i = 1; i < nums.length; i++) {
            // Update currentSum, either take current element alone or add to the current subarray sum
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            
            // Update maxSum if currentSum is larger
            maxSum = Math.max(maxSum, currentSum);
        }
        
        // Return the maximum sum found
        return maxSum;
    }
}
Input
nums =
[-2,1,-3,4,-1,2,1,-5,4]
Output
6
Expected
6
