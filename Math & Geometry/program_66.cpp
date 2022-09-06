class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int n = digits.size() - 1;
     int carry = 0;
     while(n >= 0)   {
         if(digits[n] < 9)  {
             digits[n] += 1;
             carry = 0;
             break;
         }
         else   {
             digits[n] = 0;
             carry = 1;
         }
         --n;
     }
    if(carry) digits.insert(digits.begin(),1);
    return digits;
    }
};
