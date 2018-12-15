#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,n,m,left,right,top,bottom;
   int  a[10][10]; 
   clrscr();
   
    printf("\n\tEnter Row & Column OF Array:");
   scanf("%d",&m);

   left=0;
   top=0;
   bottom=m-1;
   right=m-1;
   n=0;
  

	   while(top<=bottom)
	    {
	   for(i=top,j=left;j<=right;j++)
	     {  a[i][j]=n; n++;} top++;

	   for(i=top,j=right;i<=bottom;i++)
	     {  a[i][j]=n; n++;} right--;

	   for(i=bottom,j=right;j>=left;j--)
	     {  a[i][j]=n; n++;} bottom--;

	   for(i=bottom,j=left;i>=top;i--)
	     {  a[i][j]=n; n++;} left++;

	     }


      for(i=0;i<m;i++)
       {
	 for(j=0;j<m;j++)
	  {
	     if(a[i][j]<10)
	       printf(" 0%d",a[i][j]);

	     else
		printf(" %d",a[i][j]);
	  }
	 printf("\n");
      }

   getch();
}