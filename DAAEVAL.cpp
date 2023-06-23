// #include<iostream>
// using namespace std;
// int CountInversionArray(int a[], int n) {
//   int i, j, c = 0;
//   for(i = 0; i < n; i++) {
//       for(j = i+1; j < n; j++)
//          if(a[i] > a[j])
//             c++;
//   }
//   return c;
// }
// int main() {
//   int n, i;

//   cin>>n;
//   int a[n];
//   for(i = 0; i < n; i++) {
//       cin>>a[i];
//   }
//  cout<< "\n"<<CountInversionArray(a, n)<<endl;
//   return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int mergeSorthelper(int arr[], int B[], int low, int high);
// int mergerArray(int arr[], int B[], int low, int mid, int high);

int mergerArray(int arr[], int B[], int low, int mid,
                int high)
{
    int i, j, k;
    int inv = 0;

    i = low;
    j = mid;
    k = low;
    while ((i <= mid - 1) && (j <= high))
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            B[k] = arr[j];
            k++;
            j++;
            inv = inv + (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
    return inv;
}

int mergeSort(int arr[], int n)
{
    int B[n];
    return mergeSorthelper(arr, B, 0, n - 1);
}

int mergeSorthelper(int arr[], int B[], int low, int high)
{
    int mid, inv = 0;
    if (high > low)
    {

        mid = (high + low) / 2;

        inv += mergeSorthelper(arr, B, low, mid);
        inv += mergeSorthelper(arr, B, mid + 1, high);

        inv += mergerArray(arr, B, low, mid + 1, high);
    }
    return inv;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = mergeSort(arr, n);
    cout << " Invesrions \t " << ans;
    return 0;
}
