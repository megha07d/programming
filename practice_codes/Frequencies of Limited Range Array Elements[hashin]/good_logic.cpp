
void frequencyCount(vector<int>& arr, int N, int P) 
{
    // Step 1: Decrease all elements by 1, so they become in the range [0, N-1]
    for (int i = 0; i < N; i++) {
        if (arr[i] > N) {
            arr[i] = 0;
        } else {
            arr[i]--;
        }
    }

    // Step 2: Use arr[] to store frequencies using modular arithmetic
    for (int i = 0; i < N; i++) {
        int index = arr[i] % N;  // Find the original value
        if (index < N) {
            arr[index] += N;  // Increment the value at the correct index by N
        }
    }

    // Step 3: Update arr[] with frequencies
    for (int i = 0; i < N; i++) {
        arr[i] = arr[i] / N;  // Frequency of (i+1) will be stored here
    }
}
