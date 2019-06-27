#include<stdio.h>
#include<stdlib.h>
size_t maxSeq(int * array, size_t n);

int main (){

  int arr[]={};
  size_t ans1=maxSeq(arr,0);
  if (ans1 != 0) return EXIT_FAILURE;

  int   arr1[]={ 1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  ans1=maxSeq(arr1,10);
  if (ans1 != 4 ) return EXIT_FAILURE;

  int arr2[]={1,2,3,4};
  size_t ans2=maxSeq(arr2,4);
  if (ans2 != 4) return EXIT_FAILURE;

  int arr5[]={1,2,2,4};
  ans2=maxSeq(arr5,4);
  if (ans2 != 2 ) return EXIT_FAILURE;

  int ar[]={3,-4,5,6};
  ans2=maxSeq(ar,4);
  if (ans2 != 3) return EXIT_FAILURE;

  int ar6[]={10,9,7,6};
  ans2=maxSeq(ar6,4);
  if (ans2 != 1) return EXIT_FAILURE;

  int ar7[]={1,5,3,6,4,7,2,9,8};
  ans2=maxSeq(ar7,9);
  if (ans2 != 2) return EXIT_FAILURE;

  int ar8[]={1};
  ans2=maxSeq(ar8,1);
  if (ans2 != 1) return EXIT_FAILURE;

  int ar9[]={1,5,3,6,4,7,2,9,8};
  ans2=maxSeq(ar9,0);
  if (ans2 != 0) return EXIT_FAILURE;

  int ar10[]={-5,-4,-3,-2,-1,0};
  ans2=maxSeq(ar10,6);
  if (ans2 != 6) return EXIT_FAILURE;

  int ar11[]={22,44,55,11,99,101,1001,100001,1,2,670,33};
  ans2=maxSeq(ar11,12);
  if (ans2 != 5) return EXIT_FAILURE;

  int ar12[]={1,3,5,4,9};
  ans2=maxSeq(ar12,5);
  if (ans2 != 3) return EXIT_FAILURE;



  return EXIT_SUCCESS;


}
