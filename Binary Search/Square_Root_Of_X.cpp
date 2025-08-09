#include<iostream>
using namespace std;

int square_root(int x){
  int start = 0;
  int end = x;
  while(start <= end){
    int mid = start + (end-start)/2;
    if((mid * mid)==x)
         return mid;
    else if(mid * mid > x)
         end = mid - 1;
    else 
        start = mid + 1;          
  }
  return -1;
}

int main(){
int x;
cout <<"\nEnter the number which you want to find the square root : ";
cin >> x;
int ans = square_root(x);
if(ans >= 0)
 cout << "The square root of " <<x<<" is "<< ans;
else
  cout << "\nThe number you entered is negative ";

 return 0;
}