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
// Bubble Sort

for(int i=n-2 ; i>=0 ; i--){
  for(int j=0 ; j<=i; j++){
    if(a[j]> a[j+1])
       swap(a[j],a[j+1]);
  }
}
cout << "\nArray after sorting" << endl;
for(int i=0 ; i<n ;i++){
  cout << a[i] << " ";
}
return 0;
}