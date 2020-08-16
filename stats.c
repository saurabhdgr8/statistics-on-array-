/*********************************************************************************************************************
 *     Copyright (C) 2020 by SAURABH PATIL - GOA COLLEGE OF ENGINEERING.
 *      
 *     Redistribution, modification or use of this software in source or binary
 *     forms is permitted as long as the files maintain this copyright
 *             
 *********************************************************************************************************************/
/**
 *     
 *     @file stats.c
 *     @brief this file is used to find stastistical parameters of an arrray.
 *
 *     this is excecutionable file with an extention of .c which includes all the functions along with 
 *     their discriptions that perfrom statistical operations on the array such as mean ,median, maximum and minimum.
 *     apart from this it will also sort the array in descending order. 
 *                
 *     @author SAURABH PATIL
 *     @date 15 August 2020
 *                
 */



#include<stdio.h>

#include"stats.h"


void main() {
  int size = 40;
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  
  unsigned char test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};




print_array(test,size);
sort_array(test,size);
a=find_mean(test,size);
b= find_median(test,size);
c=find_maximum(test,size);
d=find_minimum(test,size);
print_statistics(a,b,c,d);
}

unsigned char print_array(unsigned char test[],int size){
	printf("\n the array is:");
	for (int i=0; i< size; i++){
		printf(" %d ", test[i]);
		
	}
	
}

unsigned int find_mean(unsigned char test[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum += test[i];
	}
	return sum/size;
}
unsigned int print_statistics(int a,int b,int c,int d ){
	printf("\n MEAN = %d \n",a);
	printf("\n MEDIAN = %d \n" ,b);
	printf("\n MAXIMUM = %d \n",c);
	printf("\n MINIMUM = %d \n",d);
}
unsigned char sort_array(unsigned char test[],int size){
	int max , temp;
	for(int i=0;i<size-1;i++){
		max=i;
		for(int j=i+1;j<size;j++){
			if (test[j] > test[max]){
				max=j;
			}
		}
		temp = test[i];
		test[i]=test[max];
		test[max]=temp;
	}
	



        printf("\n sorted array is ");
	for(int i=0; i<size; i++){
		printf(" %d ",test[i]);
	}

}
unsigned int find_median(unsigned char test[],int size){
	if(size%2 != 0){
             return test[size/2];
	}
	return (test[(size-1)/2] + test[size/2]) / 2;
}

unsigned int find_maximum(unsigned char test[],int size){
	return test[0];
}
unsigned int find_minimum(unsigned char test[],int size){
	return test[size-1];
}



