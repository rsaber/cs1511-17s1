struct _node {
	int value;
	struct _node * next;
};

typedef struct _node Node;
/*
	A: 1 2 5 10
	B: 2 4 6 8 12 13 14 15
	C: 1 2 2 4 5 6 8 10 12 13 14 15
*/

Node *append(Node *list, Node *apendee){
	if(list==NULL) return apendee;
	Node * curr = list;
	while(curr->next!=NULL){
		curr = curr->next;
	}
	curr->next = apendee;
	return list;
}

Node * inplaceMerge(Node * listA, Node *listB){
	Node currA = listA, currB = listB, temp, returnList = NULL;

	while(currA != NULL && currB != NULL){
		if(currA->value <= currB->value){
			temp = currA->next;
			currA->next = NULL;
			returnList = append(returnList, currA);
			currA = temp;
		}else{
			temp = currB->next;
			currB->next = NULL;
			returnList = append(returnList, currB);
			currB = temp;
		}
	}

	if(currA == NULL){
		// list a finished first, we need to 
		// append all of list b onto return list
		returnList = append(returnList, currB);
	}else{
		returnList = append(returnList, currA);
	}
	return returnList;
}


Node * reverse(Node *list){
	Node *curr = list;
	Node *prev = NULL;
	Node *next = NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

2->4->x

4->X

4->X

X

a b c d
b a d c

Node *pairwiseSwap(Node *head){
	if(head==NULL || head->next==NULL) return head;
	Node *sublist = head->next->next;
	// swap head and head->next
	Node *first = head;
	Node *second = head->next;

	second->next = first;
	first->next = pairwiseSwap(sublist);
	return second;
}

Node *delete_oddr(Node *head){
	if(head == NULL) return NULL;
	if(head->value %2 != 0){
		Node *temp = head->next;
		free(head);
		return delete_oddr(temp);
	}
	head->next = delete_oddr(head->next);
	return head;
}

Node * delete_odd(Node * head){
	Node *curr, *prev;
	curr = head;
	prev = NULL;
	while(curr!=NULL){
		if(curr->value %2 == 1){
			// delete the node here
			if(prev == NULL){
				Node *temp = curr->next;
				free(curr);
				curr = temp;
			}
			prev->next = curr->next;
			free(curr);
			prev = curr;
			curr = prev->next;
		}else{
			prev = curr;
			curr = curr->next;
		}
	}
}
