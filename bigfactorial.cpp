#include <iostream>
#include <sstream>
using namespace std;

#define LEN(X) (sizeof(X) / sizeof(X[0]))

// The Problem here stems from using the array data structure
// instead of using a flexible vector
// TODO: Rewrite everything using a vector!

void printArray(int* ar, int size) {
  for (int i = 0; i < size; i++)
    cout << ar[i] << ' '; 
  cout << endl;
}

// function for calculating factorial
int fact(int n) {
  int i,j,arr[100000],c,s,carry;
  arr[0]=1;
  c=1;
  carry=0;
  for(i=1;i<=n;i++){
    for(j=0;j<c;j++){
      s=arr[j]*i+carry;
      arr[j]=s%10;
      carry=s/10;
    }

    while(carry>0){
      arr[c]=carry%10;
      carry=carry/10;
      c++;
    }
  }

  for(i=c-1;i>=0;i--)
    cout << arr[i];
  cout<<endl;
  // ostringstream os;
  // for (int i : arr)
  //   os << i;
  // string ans(os.str());
  // return ans;
  printArray(arr, LEN(arr));
  printf("ARR: %d\n", LEN(arr));
  return 0;
}

//
int main(){
  int a;
  cout<<"Enter number for calculating factorial: ";
  cin>>a;
  fact(a);
  return 0;
}
