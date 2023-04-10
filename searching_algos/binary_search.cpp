int binary_search(int arr[],int size, int key)
{
    int mid =  size / 2;
    if(arr[mid] == key)
    return mid;
    while(mid > 0 && mid < size)
    {
        if(key < arr[mid])
        {
            mid = mid / 2;
        }
        else if(key > arr[mid])
        {
            
        }
    }
}