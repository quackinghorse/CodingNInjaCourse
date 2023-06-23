#include<iostream>
void mergerArray(int input[], int low , int high) {
	int mean =(low +high)/2;
	int trou=high - low + 1;
	int arr[trou];
	int k = 0;
	int j = mean+1;
	int i = low;
	while(i<=mean && j <=high){
		if(input[i] <input[j]){
			arr[k] = input[i];
			k++;
			i++;
		}else{
			arr[k] = input[j];
			k++;
			j++;
		}
	}
	while(i<=mean){
		arr[k] = input[i];
		k++;
		i++;
	}
	while(j <=high){
		arr[k] = input[j];
		k++;
		j++;
	}
	for(int j = low ; j <=high;j++){
		
		input[j] = arr[j-low];
	}
	
}
void mergeSorthelper(int input[],int size,int low , int high) {
	if(low>=high) {
		return ;
	}

int mid = (low +high)/2;
mergeSorthelper(input, size, low, mid);
mergeSorthelper(input,size, mid +1, high);
mergerArray(input,low, high);
}
void mergeSort(int input[], int size){
	mergeSorthelper(input,size,0,size-1);
}

int findUnique(int *input, int n) {
    int ans =0;
    for(int i =0; i<n ; i++) {
        if(input[i]==input[i+1] || input[i]==input[i-1]) {
            continue;
        }
        else {
            ans =input[i];
        }
        return ans;
    }
}

using namespace std;
int main()
{
     int length;
    cin >> length;
    int *input = new int[length];
    for (int i = 0; i < length; i++)
        cin >> input[i];
    mergeSort(input, length);
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }
return 0;
}