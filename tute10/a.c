

int commodity_at_location(struct bot *b, char *name){
	assert(b);
	struct location * current = b->location;
	if(current->type != LOCATION_SELLER){
		return 0;
	}
	if(!strcmp(current->commodity->name, name)){
		return current->quantity;
	}
	return 0;
}
