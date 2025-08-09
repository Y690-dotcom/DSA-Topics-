#include<iostream>
using namespace std;
int main(){
int a[] = {2,5,3,1,7};
int n = sizeof(a)/sizeof(a[0]);
// print the given array
cout << "The given array :- "<<endl;
for(int i=0 ; i<n ; i++){
  cout << a[i] << " ";
}
// Sorting
// Insertion Sort
for(int i=1 ; i<n ; i++){
  for (int j = i ; j>0 ;j--){
      if(a[j]  <  a[j-1])
          swap(a[j], a[j-1]);
      else 
         break;    
  }
  
  
}  
cout << "\nArray after sorting" << endl;
for(int i=0 ; i<n ;i++){
  cout << a[i] << " ";
}
return 0;
}