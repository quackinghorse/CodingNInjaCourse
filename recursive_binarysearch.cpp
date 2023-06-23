#include <iostream>
using namespace std;
int binary_search_helper(int input[] ,int low, int high, int element)
{
int mid = (low +high)/2;
if(low>high){
return -1;
}
if(low==high) {
if(input[low]== element) {
    return low;
}
}
if(input[mid]==element) {
    return mid;
}
if(element<input[mid]){
return binary_search_helper(input,low, mid -1,element);
}
    return binary_search_helper(input, mid +1, high, element);
}
int binary_search(int input[], int size, int element) {
return binary_search_helper(input, 0, size-1, element);
}
int main()

{
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int element ;
    cin>>element;
    int ans =binary_search(input, size, element);
   cout<<ans<<"\t";
    return 0;
}