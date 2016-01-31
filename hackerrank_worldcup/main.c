//
//  main.c
//  hackerrank_worldcup
//
//  Created by Pooshan Vyas on 9/12/15.
//  Copyright © 2015 Pooshan Vyas. All rights reserved.
//

#include<stdio.h>

void sort(int a[],int n)
{ int i,j,k,temp;
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
            if(a[j]<a[i])
            {
                temp=a[i];
                for(k=i;k>j;k--)
                    a[k]=a[k-1];
                a[k]=temp;
            }
    }
}

int main()
{
    int total_value = 0;
    int a[100],i;
    //printf("Enter Length:  "); scanf("%d",&n);
    
    printf("Enter data: \n");
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    
    sort(a,10);
    
    //printf("After sorting \n");
    //for(i=0;i<10;i++) printf("%d\n",a[i]);
    
    total_value = a[0] + a[2] + a[4];
    
    printf("%d \n", total_value);
}



