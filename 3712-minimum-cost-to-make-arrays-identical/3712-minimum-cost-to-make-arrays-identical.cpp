class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long int ans1=0;
        for(int i=0;i<n;i++){
            ans1+=abs(brr[i]-arr[i]);
        }
        long int ans2=k;
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        for(int i=0;i<n;i++){
            ans2+=abs(brr[i]-arr[i]);
        }
        return min(ans1,ans2);
    }
};