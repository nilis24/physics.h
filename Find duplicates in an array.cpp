class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] += n;
        }
        bool flag = false;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if ((arr[i] / n) > 1) {
                ans.push_back(i);
                flag = true;
            }
        }
        if (!flag) ans.push_back(-1);
        return ans;
    }
};
