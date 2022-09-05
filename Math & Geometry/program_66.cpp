class Solution {
	public:	
	vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, j = 0;
        int sum = digits[i] + 1;
        int carry = sum / 10;

        while(digits[i] + carry > 9 && i >= 0)    {
            digits[i] = 0;
            --i;
            if(i >= 0)  {
                sum = digits[i] + 1;
                carry = sum / 10;
                continue;
            }
            if(carry == 1 && i < 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        digits[i] += 1;
        return digits;
    }
};
