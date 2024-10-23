
// Function to count the frequency of all elements from 1 to N in the array.
void frequencyCount(vector<int> &arr, int N, int P)
{
    // do modify in the given array
    vector<int> b(N, 0);

    int arr_size = arr.size();
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > N)
        {
            continue;
        }
        b[arr[i] - 1] += 1;
    }

    for (int i = 0; i < b.size(); i++)
    {
        arr[i] = b[i];
    }

    return;
}