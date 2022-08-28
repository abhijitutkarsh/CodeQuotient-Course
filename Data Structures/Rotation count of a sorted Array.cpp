int rotationCount(int arr[], int n) {
  // Write your code here
  int l=0, r =n-1;
  while(l<=r)
  {
    if(arr[l]<= arr[r])
      return l;
    int mid = (l+r)/2;
    int next = mid+1%n;
    int prev = mid-1+n%n;
    if(arr[next]>arr[mid] and arr[prev]>arr[mid])
      return mid;
    else if(arr[mid] < arr[r])
      r = mid - 1;
    else
      l = mid + 1;
  }
  return 0;
}