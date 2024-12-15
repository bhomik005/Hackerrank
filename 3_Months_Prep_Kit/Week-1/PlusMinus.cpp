// O(n) time | O(1) space
void plusMinus(vector<int> arr) {
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int total = arr.size();
    // calculate the number of pos, neg and zeros
    // O(n) time
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] > 0) positives++;
        else if(arr[i] < 0) negatives++;
        else zeros++;
    }

    // O(1) time - constant time operations
    cout << setprecision(6) << static_cast<double>(positives)/total << "\n";
    cout << setprecision(6) << static_cast<double>(negatives)/total << "\n";
    cout << setprecision(6) << static_cast<double>(zeros)/total << "\n";
}