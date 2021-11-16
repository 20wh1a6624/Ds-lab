#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int ele,pos,c;
 struct node *head = NULL,*curr,*temp,*temp1;
struct node *create(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	while(n--){
		curr = (struct node*)malloc(sizeof(struct node));
		printf("enter value");
		scanf("%d",&(curr -> data));
		
		if (head == NULL)
				head = curr;
		else{
				temp = head;
				while(temp -> link != NULL)
						temp = temp -> link;
				temp -> link = curr;
			}
	}
	return head;
}
struct node* insert_begin(){
	curr = (struct node*)malloc(sizeof(struct node));
	printf("enter element that need to be inserted");
	scanf("%d",&(curr -> data));
	curr -> link = head;
	head = curr;
	return head;
}
struct node* insert_end(){
	curr = (struct node*)malloc(sizeof(struct node));
	printf("enter element that need to be inserted at end");
	scanf("%d",&(curr -> data));
	temp = head;
	while(temp->link != NULL)
		temp = temp -> link;
	temp -> link = curr;
	curr->link = NULL;
	return head;
}
struct node* insert_pos(){
	curr = (struct node*)malloc(sizeof(struct node));
	printf("enter element that need to be inserted");
	scanf("%d",&(curr->data));
	printf("enter the position");
	scanf("%d",&pos);
	c = 1;
	temp = head;
	while(c < pos){
		temp1 = temp;
		temp = temp -> link;
		c++;
	}
   	temp1 -> link = curr;
	curr -> link = temp;
	return head;
}

struct node*delete_begin(){
	temp = head;
	printf("%d",temp -> data);
	head = head -> link;
	free(temp);
	return head;
}

	

		
	
	              
void display(struct node *head){
	temp = head;
	while(temp != NULL){
		printf("%d -> ",temp -> data);
		temp = temp -> link;

	}
}

int main(){
	create();
	display(head);
	insert_begin();
	display(head);
	insert_end();
	display(head);
	insert_pos();
	display(head);
	delete_begin();
	display(head);
}
