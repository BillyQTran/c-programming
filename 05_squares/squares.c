#include <stdio.h>
#include <stdlib.h>


/* 
 * Determines if coord is in range between
 * offset (INCLUSIVE) and offset + size (EXCLUSIVE)
 */
int isInRange(int coord, int offset, int size) {

  if(offset<=coord&&coord<offset+size)
    {
      return 1;
    }
  // if coord is in range, return 1
  // else, return 0
  return 0;
}

/*
 * Determines if coord is at border of offset or
 * offset + size
 */
int isAtBorder(int coord, int offset, int size) {
  int a;
  a=offset+size;
  // if coord is equal to offest or offset + size
  if(coord==offset||coord==a)
    {
      return 1;
	}
  
  // return 1, else return 0
  return 0;
}

void squares(int size1, int x_offset, int y_offset, int size2) {
  //compute the max of size1 and (x_offset + size2).  Call this w

  int w;
  int h;
  int k = 0;
  if(y_offset+size2<=size1)
    {
      h = size1;
    }
  else{
    h = y_offset+size2;
    }

  if(x_offset+size2<=size1)
    {
      w = size1;
    }
  else
    {
      w = x_offset+size2;
    }
  int y;
  int x;
  int i;
  int j;
  for(i=0;i<h;i++)
    {
      y = i;
      k++;
      for(j=0;j<w;j++)
	{
	  x = j;
	  if(((x_offset<=x&&x<x_offset+size2)&&(y==y_offset||y==y_offset+size2-1))||((y_offset<=y&&y<y_offset+size2)&&(x==x_offset||x==x_offset+size2-1)))
	    {
	      printf("*");
	    }
	  else if(((x<size1)&&(y==0||y==size1-1))||((y<size1)&&(x==0||x==size1-1)))
	    {
	      printf("#");
	    }
	  else{
	    printf(" ");
	  }
	}
      printf("\n");
      if(k==h)
	{
	  break;
	}
    }
  //count from 0 to h. Call the number you count with y

    //count from 0 to w. Call the number you count with x

      //check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *

      //if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #

      //else print a space
    //when you finish counting x from 0 to w, 
    //print a newline

}


