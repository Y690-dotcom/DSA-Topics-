#include<iostream>
using namespace std;

int find_occurance_left(int arr[7],int n,int size){
    int count = 0;
    int start = 0;
    int res;
    int end = size-1;
    while(start <= end){
      int mid = start + (end-start)/2;
      if(arr[mid] == n){
         res = mid;
         end = mid - 1;
      }
      else if(arr[mid] > n)
         end = mid-1;
      else 
         start = mid + 1;         
    } 
    return res;
}

int find_occurance_right(int arr[7],int n,int size){
    int count = 0;
    int start = 0;
    int res;
    int end = size-1;
    while(start <= end){
      int mid = start + (end-start)/2;
      if(arr[mid] == n){
         res = mid;
         start = mid + 1;
      }
      else if(arr[mid] > n)
         end = mid-1;
      else 
         start = mid + 1;         
    } 
    return res;
}
int find_occurance(int arr[7],int n,int size){
    int first = find_occurance_left(arr,n,size);
    int last = find_occurance_right(arr,n,size);
    if(first < 0 && last < 0)
       cout << "\nElement is not present";
    else 
        cout << "Number of occurances = " << last - first + 1;  

}

int main(){
int arr[] = {1,2,3,3,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
int n;
cout << "Given array = ";
for(int i=0 ; i<size ; i++){
  cout << arr[i] << " ";
}
cout << "\nEnter the element whose you find the number of occurances : ";
cin >> n; 
find_occurance(arr,n,size);
  return 0;

}