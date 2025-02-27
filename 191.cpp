public class Solution {
    public int hammingWeight(int n) {
        int count = 0;
        
        // Use Brian Kernighan's algorithm to count the number of 1 bits
        while (n != 0) {
            // Remove the rightmost 1 bit
            n = n & (n - 1);
            count++;
        }
        
        return count;
    }
}
Input
n =
11
Output
3
Expected
3
