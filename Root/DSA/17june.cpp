#include<bits/stdc++.h>
using namespace std;
//Q1-
class Solution {
    public:
      int reverseDigits(int n) {
       bool negative = n < 0;
      long long x = negative ? -n : n;
      long long rev = 0;
      while (x > 0) {
          rev = rev * 10 + (x % 10);
          x /= 10;
      }
      return negative ? -rev : rev;
      }
  };

//Q2-
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
                int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return lo;
        }
    };

//Q3-
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
                int result = 0;
        for (int x : nums) {
            result ^= x; 
        }
        return result;
        }
    };

//Q4-
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing = n;
        for (int i = 0; i < n; ++i) {
            missing ^= i ^ nums[i];
        }
        return missing;
        }
    };