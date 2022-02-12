#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 typedef struct Process
 {
   int id;
   int priority;
   int cpu_time;
   char* type;
   char data[10];
   struct Process *next;
 }queue;
 

 // code by rohit {Start}
  queue *q1, *q2, *q3;
  int nos_process;


  void init(queue **p){
    char* a,b;
    char d[66];
    int e,f;
    queue *temp;
    
    (*p) = (queue *)malloc(sizeof(queue));

    printf("\nEnter the number of processes: ");
    scanf("%d",&nos_process);
    (*p)->data="asaasasas";
    if (nos_process == 0){
      printf("\nLinked list is empty");
    }else{
      printf("\nEnter the first process : ");
      //scanf("%s",d);
      //a=d;
      //(*p)->data = d;
      (*p)->id=100;
      for(int i =0; i < nos_process;i++){
      
        printf("%s",(*p)->data);
         //printf("%s",d);


      
      }

    }
  }



 // code by rohit {End}