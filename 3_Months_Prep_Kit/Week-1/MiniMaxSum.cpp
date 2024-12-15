// O(n log n) time | O(1) space
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end()); // O(n log n)
    long minSum = (long)arr[0] + arr[1] + arr[2] + arr[3];
    long maxSum = (long)arr[1] + arr[2] + arr[3] + arr[4];
    cout << minSum << " " << maxSum << "\n";
}

// O(n) time | O(1) space - Better right!
void miniMaxSum(vector<int> arr) {
    int min = arr[0];
    int max = arr[0];

    // O(n) time
    for(int i = 1; i < arr.size(); ++i) {
        if(min > arr[i]) {
            min = arr[i];
        }
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    // total of all numbers
    long total = (long)arr[0] + arr[1] + arr[2] + arr[3] + arr[4];

    long minSum = total - max;
    long maxSum = total - min;
    cout << minSum << " " << maxSum << '\n';
}
