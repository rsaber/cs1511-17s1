
/*
	The singly linked list structs.
*/
typedef struct _node{
	int value;
	struct _node * next;
}*Node;

/* Don't worry about this, we probably won't use this */
typedef struct _list{
	int size;
	Node first;
	Node last;
}*List;


#define TRUE 1
#define FALSE 0

// And I did the first one for you.
Node newNode(int a){
	Node n = malloc(sizeof(struct _list));
	n->value = a;
	n->next = NULL;
	return n;
}

// Functions you need to write to build a linked list
Node append(Node head, int newNumber);
Node delete(Node head, int toDelete);
Node duplicateList(Node head);

// Here's the fun stuff
Node get(Node head, int index);
Node getFromEnd(Node head, int index);
Node reverse(Node head);
int isCycle(Node head);
