#include <stdio.h>
#define MAX 6
int queue[MAX];
int front =0;
int rear=1;
int itemCount =0;
int isFull(){
    return itemCount== MAX;
}
int isEmpty(){
    return itemCount==0;
}
void insert (int data){
    if(isFull()){
  if(rear==MAX-1){
    rear=-1;
  }
  queue[++rear]=data;
  itemCount++;
    }
}

int main(){
int i;
printf("Enter the elements :");
for(i=0;i<MAX;i++){
    scanf("%d",queue[i]);
}
for(i=0;i<MAX;i++){
    insert(queue[i]);
  }
 
return 0;
}