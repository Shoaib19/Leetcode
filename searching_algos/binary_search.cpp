int binary_search(int arr[],int size, int key)
{
    int low, mid  = 0;
    int high = size - 1;
    while(low <= high)
    {
        mid = low + (high - low) / 2;
        if(arr[mid] == key)
        return mid;
      
        if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}