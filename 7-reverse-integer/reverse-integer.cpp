class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int sign = (x < 0) ? -1 : 1; // Determine the sign
        x = abs(x); // Work with the absolute value of x

        while (x > 0) {
            int ld = x % 10; // Get the last digit
            
            // Check for overflow before updating rev
            if (rev > (INT_MAX - ld) / 10) {
                return 0; // Return 0 if overflow would occur
            }

            rev = rev * 10 + ld;
            x = x / 10; // Remove the last digit from x
        }

        rev *= sign; // Reapply the sign to the reversed number

        // Check if the final reversed number is within 32-bit signed integer range
        if (rev < INT_MIN || rev > INT_MAX) {
            return 0; // Return 0 if out of bounds
        }

        return rev;
    }
};
