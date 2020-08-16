

/******************************************************************************************************
 *  Copyright (C) 2020 by SAURABH PATIL - GOA COLLEGE OF ENGINEERING.
 *   
 *    Redistribution, modification or use of this software in source or binary
 *     forms is permitted as long as the files maintain this copyright
 *       
 *******************************************************************************************************/
/**
 *   
 *    @file stats.h
 *    @brief Header file containing function declartions.
 *    
 *     This file contains all the function declartions along with their description needed to be used 
 *     in the stats.c execution file. the stats.c file contains functions that perform statistical 
 *     operations likemean ,median ,maximum, minimum on an array.this header file with .h extention acts 
 *     like an local libary to the executional file. 
 *      
 *     @author SAURABH PATIL
 *     @date 15 August 2020
 *      
 **/

#ifndef __STATS_H__
#define __STATS_H__


unsigned char print_array(unsigned char test[],int size);
/**
 * @brief prints the original array 
 *  
 *  This functions takes the array and its length as input. It will then print the 
 *  the each and every charater of array in  the order the array was initialized.
 *
 *  @param array test to be printed.
 *  @param size this the length of the array.
 *
 *  @return void i.e 0.
 *
 *
 */
unsigned int find_mean(unsigned char test[],int size);
/**
 *  @brief finds the mean (avearge) of an array.
 *
 *  This function takes the array and the length of the array as inputs. it will 
 *  then take the mean of the array this is done by summing all the characters present 
 *  in the array and dividing it by the length of the array.it then returns the mean value.
 *
 *  @param array test whose mean is to be taken.
 *  @param size length of the array.
 *
 *  @return mean of the array.
 *
 *
 */
unsigned int print_statistics(int a,int b,int c,int d );
/**
 * @brief prints mean ,median, maximum, minimum of the array.
 *
 * this function takes input a=mean , b=median , c= maximum , d= minimum which are found 
 * and stored in these variables a,b,c,d by other functions.it will the systematically print 
 * them.
 * 
 * @param a mean of the array
 * @param b median of the array
 * @param c maximum of the array
 * @param d minimum of the array
 *
 * @return voidi.e 0.
 *
 *
 *
 */
unsigned char sort_array(unsigned char test[],int size);
/**
 * @brief sorts the array in descending format and also prints the sorted array.
 *
 * this function takes the array and the length of the array as input.it  will the sort the 
 * array in descending format i.e largest character in the array will come first and the smallest character 
 * will come last. The sort is done on the original test array which will change the format that the characters
 * appear in the array in descending format. this changed array is then printed as sorted array after the original 
 * array has been printed.  
 *
 * @param Array test to be sorted.
 * @param size  length of the array. 
 *
 * @return void i.e 0.
 */

unsigned int find_median(unsigned char test[],int size);
/**
 * @brief finds the median of the array
 *
 * this function takes the array and the length of the array as the input. note that this function will appear when the sort 
 * function is completed so the input array argument that this function takes is sorted in descending format.it will then 
 * find the median i.e the middle value of the array. if the length is odd then the middle character of the array 
 * is returned as median.Else if the length is even then the average of the 2 middle chracters is taken and returned.
 *
 * @param array test the sorted array on which the median is found.
 * @param size length of the array
 *
 * @returm median of the sorted array  
 *
 */
unsigned int find_maximum(unsigned char test[],int size);
/**
 * @brief finds the maximum character in the array.
 *
 * this function takes the array and the length of the array as the input. note that function will appear when the sort 
 * function is completed so the input array argument that is passed to this function is sorted in descending order. it 
 * will then find the maximum. the first chracter in the array will be the maximum which is returned.
 *
 * @param array test the sorted array on which the maximum is found.
 * @param size length of the array.
 *
 * @return maximum chracter of the array.
 *
 *
 *
 */

unsigned int find_minimum(unsigned char test[],int size);

/** 
 *     @brief finds the minimum character in the array.
 *
 *     this function takes the array and the length of the array as the input. note that function will appear when the sort 
 *     function is completed so the input array argument that is passed to this function is sorted in descending order. it 
 *     will then find the minimum. the last character in the array will be the minimum which is returned.
 *     
 *       @param array test the sorted array on which the minimun is found.
 *       @param size length of the array.
 *        
 *       @return maximum chracter of the array.
 *          
 *           
 *          
 */

#endif /* __STATS_H__ */

