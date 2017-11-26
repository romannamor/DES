#include<stdio.h>
int main(){
int group_total=0,group_initial=0,item_total=0,item_initial=0,budget=0,score_i=0,cost_i=0;
while(true){
scanf("%d",&group_total)
if(group_total>=0||group_total<=100)
break;
printf("please enter again:")
}
while (group_initial<group_total)
while(true){
scanf("%d",&budget);
if(budget>=0||budget<=100) 
break;
printf("please enter again:")
}
while(true){
scanf("%d",&item_total)
if(item_total>=0)
break;
printf("please enter again:")
}
int items[item_total][2];
for(int input_item=0;input_item<item_total;input_item++)
{
while(true){
scanf("%d %d",&score_i, &cost_i);
if(score_i>=0 ||cost_i<=100)
items[input_item][0]=score_i;
items[input_item][1]=cost_i;
}
}
int sort[item_total];
for(int i=0;i<item_total;i++)
for(int j=1;j<item_total-1;j++)
{

}
int expend=0,selected_cost=0,selected_score=0,selected_group[item_total];
item_initial=0;
selected_cost=items[0][1];
while(expend<=budget || item_initial<item_total)
{
for(int i=1;i<item_total<i++)
{
if(items[i][1]==selected_cost)
}
}
}

