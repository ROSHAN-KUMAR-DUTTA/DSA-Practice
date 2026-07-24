class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high)
{
    int temp[high - low + 1];
    int key = 0;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[key++] = arr[left++];
        }
        else
        {
            temp[key++] = arr[right++];
        }
    }
    while (left <= mid)
    {
        temp[key++] = arr[left++];
    }
    while (right <= high)
    {
        temp[key++] = arr[right++];
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

long long findPairs(vector<int>& arr,int low, int mid, int high){
    long long cnt=0;
     int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && 1LL*arr[i]>2LL*arr[right]){
            right++;
        }
        cnt+=right-mid-1;
    }
    return cnt;
}

int mergeSort(vector<int>& arr, int low, int high)
{
    if (low >= high)
        return 0;
    int mid = low + (high - low) / 2;
    long long cnt = 0;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt+= findPairs(arr,low,mid,high);
    merge(arr, low, mid, high);
    return (int)cnt;
}
    int reversePairs(vector<int>& arr) {
        return mergeSort(arr,0,arr.size()-1);
    }
};