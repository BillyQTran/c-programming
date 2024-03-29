#include <stdio.h>
#include <stdlib.h>
 struct _retire_info{
  int months;   // so thang
  double contribution; // so tien cong vao hang thang
  double rate_of_return;  // phan tram gia tang

};

typedef struct _retire_info retire_info;

void retirement (int startAge,   //in months
		 double initial, //initial savings in dollars
		 retire_info working, //info about working
		 retire_info retired) //info about being retired
{
  int i;
  for(i=startAge;i<startAge+working.months;i++)
    {
      printf("Age %3d month %2d you have $%.2lf\n",i/12,i%12,initial);
      initial = initial + initial*working.rate_of_return + working.contribution;

    }
  for(i=startAge+working.months;i<startAge+working.months+retired.months;i++)
    {
      printf("Age %3d month %2d you have $%.2lf\n",i/12,i%12,initial);
      initial = initial + initial*retired.rate_of_return + retired.contribution;

    }
}


  int main()
  {
    retire_info a;
    retire_info b;
    int age;
    double money;
    age = 327;
    money = 21345;
    a.months = 489;
    a.contribution = 1000;
    a.rate_of_return = 0.00375;
    b.months = 384;
    b.contribution = -4000;
    b.rate_of_return = 0.000833333333333333333;
    retirement(age,money,a,b);
    return EXIT_SUCCESS;
  }
