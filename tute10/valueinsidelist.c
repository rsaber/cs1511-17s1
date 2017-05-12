
int member(int value, Node list){
	if(list==NULL) return FALSE;
	return list->value == value ? TRUE : member(value, list->next);
}

int member(int value, Node list){
	for(Node curr=list; curr!=NULL; curr = curr->next){
		if(curr->value == value) return TRUE;
	}
	return FALSE;
}
