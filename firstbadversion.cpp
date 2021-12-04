// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int low= 1, up = n, mid;
        while(low < up) {
            mid = low + (up - low) / 2;
            if(!isBadVersion(mid)) low = mid + 1;   
            else up = mid;
        }
        return low; 
    }
};
