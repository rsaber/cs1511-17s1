

int cargo(struct bot*b, char * name){
	struct cargo * curr = b->cargo;
	while(curr!=NULL){
		if(!strcmp(curr->commodity->name, name)) return curr->quantity;
		curr = curr->next;
	}
	return 0;
}
