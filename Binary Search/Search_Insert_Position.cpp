#include<iostream>
using namespace std;

void binary_search(int arr[1000],int key,int n){

  int start = 0;
  int end = n-1;
  while(start <= end){
    if(true){
    int mid = start + (end-start)/2;
    if(arr[mid] == key){
      cout << "Element is present at " << mid <<" index";
      break;
    }
    else if (arr[mid] > key)
    {
      end = mid-1;
    }
    else 
       start = mid + 1;
   }
   else       
      cout << "Element is not present but it's position will be at " << start <<" index";
  }



}


int main(){
int arr[1000],key,n;
cout << "\nEnter the size of array : " ;
cin >> n;
cout << "\nEnter the elements in the array in sorted order : " ;
for(int i=0 ; i<n ; i++){
  cin >> arr[i];
}

cout << "\nEnter the element you want to find : ";
cin >> key;
 binary_search(arr,key,n);
  return 0;

}