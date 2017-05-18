



struct student * read_students_file(char *       filename){
	FILE *fp = fopen(filename, "r");
	if(!fp) return NULL;
	struct student* r = read_student(fp);
	fclose(fp);
	return r;
}

typedef struct student * Student;

Student insertAtFront(Student list, Student node){
	if(!node) return list;

	node->next = list;
	return node;
}

Student makeStudent(char *line){
	char * zid, name, lab, grads;

	zid = line;
	name = strchr(zid, ' ');
	name[0] = '\0';
	name++;

	lab = strchr(name, ' ')+1;
	lab = strchr(lab, ' ' );
	*lab = '\0';

	lab++;

	grads = strchr(lab, ' ');

	*grads = '\0';
	grads++;

	Student s = malloc(sizeof(struct student));

	s->zid = atoi(zid);
	strcpy(s->name, name);
	strcpy(s->lab, lab);
	strcpy(s->grades, grads);

	s->next = NULL;
	return s;
	
	

}

struct student *read_student(FILE *fp){
	Student list = NULL;

	char buffer[100];
	while(fgets(buffer,100,fp)){
		Student newStudent = makeStudent(buffer);
		list = insertAtFront(list, newStudent);
	}

	return list;

}

int main(){
	Student s = read_students_file("hello");
	printf("%d, %s, %s, %s, %p\n", s->zid, s->name, s->	
}
