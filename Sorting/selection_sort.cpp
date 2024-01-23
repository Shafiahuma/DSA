//Time Complexity: O(N^2)
//Space Complexity: O(1)
void selectionSort(vector<int>&arr) {
    int n = arr.size();
    for(int i = 0; i <= n-2 ; i ++ )
    {
        int mn = i;
        for(int j = i; j <= n-1; j++)
        {
            if( arr[mn] > arr[j])
                mn = j;
        }
        swap(arr[i], arr[mn]);
    }
}
