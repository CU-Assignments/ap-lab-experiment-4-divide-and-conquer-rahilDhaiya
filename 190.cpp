public class Solution {
    public int reverseBits(int n) {
        int reversed = 0;
        
        for (int i = 0; i < 32; i++) {
            reversed <<= 1;         // Shift the result to the left
            reversed |= (n & 1);    // Add the least significant bit of n to reversed
            n >>= 1;                // Shift n to the right to process the next bit
        }
        
        return reversed;
    }
}
Input
n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
Expected
   964176192 (00111001011110000010100101000000)
