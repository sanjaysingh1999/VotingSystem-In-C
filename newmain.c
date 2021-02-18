/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: sanjay singh
 *
 * Created on 2 August, 2018, 7:10 PM
 */

#include<stdio.h>
int list_candidate();
int vote();
int result();
int add_candidate();
struct data
{
int id;
char mothername,fathername;

};


void main()
{        int i,j,n;
        printf("*************** ONLINE VOTING *********************\n");
        printf("               1. List of candidate\n");
        printf("               2.Vote\n");
        printf("               3. Current Result\n");
        printf("               4.Add Candidate\n");
         scanf("%d",&n);
         switch(n)
         {
         case 1:
                 printf("               1. List of candidate\n");
                  break;
         case 2:   
                 printf("               1. List of candidate\n");
                  break;
         case 3:         
                 printf("               2.Vote\n");
                   break;
         case 4:     
                 printf("               3. Current Result\n");
                   break;
         
         case 5:      
                 printf("               4.Add Candidate\n");
                  break;
                
         default:
                         
                printf("   Choose Correct Option\n");
                 break;
                
                
                
                
         
         }
         
}

