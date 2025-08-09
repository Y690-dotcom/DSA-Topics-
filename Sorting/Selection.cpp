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
// Selection Sort
int min_ind;
for(int i=0 ; i<n-1 ; i++){
     min_ind = i;
  for(int j=i+1 ; j<n ; j++){
    if(a[j] < a[min_ind]){
         min_ind = j;         
        swap(a[i],a[min_ind]);  // isko chahe yaha likhe 
    }
    
      // chahe yaha likhe dono same hi kaam karege

  }  
  

}
cout << "\nArray after sorting" << endl;
for(int i=0 ; i<n ;i++){
  cout << a[i] << " ";
}
return 0;
}