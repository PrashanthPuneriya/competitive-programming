#include<stdio.h>

int commandCall=20;
//anything except from 1 to 5
 
int cranePosition=0;
// crane position is from o to n-1

int hasBlock=0;
//hasBlock is like flag to check whether it has a block or not 

int width,height;
int boxes_finally[10000000];

void quit()
{
    for(int i = 0;i<width;i++)
        printf("%d ",boxes_finally[i]);
}


void moveLeft()
{
    if(cranePosition!=0)
    cranePosition=cranePosition-1;
}

void moveRight()
{
    if(cranePosition!=width - 1)
    cranePosition=cranePosition+1;
}

void pickUpBox()
{
    if(boxes_finally[cranePosition]!=0 && !hasBlock)
    {
    boxes_finally[cranePosition] = boxes_finally[cranePosition] - 1;
    hasBlock = 1;
    }
}

void dropBox()
{
    if(boxes_finally[cranePosition]!=height && hasBlock)
    {
    boxes_finally[cranePosition] = boxes_finally[cranePosition] + 1;
    hasBlock = 0;
    }
}


int main()
{
//scans no of stack(N) and height of each stack(H)
scanf("%d%d",&width,&height);

for(int i = 0;i<width;i++)
    {
        scanf("%d",&boxes_finally[i]);
    }

while(commandCall!=0)
{

  scanf("%d",&commandCall);

        if(commandCall == 0)
        quit();

        else if(commandCall == 1)
        moveLeft();

        else if(commandCall == 2)
        moveRight();

        else if(commandCall == 3)
        pickUpBox();

        else if(commandCall == 4)
        dropBox();
}
return 0;
}
