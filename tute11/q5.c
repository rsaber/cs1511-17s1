#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int zid;
    char name[50];
    char labname[50];
    char grades[50];
    struct student *next;
};
typedef struct student * Student;
Student insertAtFront(Student list, Student node);
struct student * read_students_file(char *       filename);
Student makeStudent(char *line);
struct student *read_student(FILE *fp);



struct student * read_students_file(char *       filename){
	FILE *fp = fopen(filename, "r");
	if(!fp) return NULL;
	struct student* r = read_student(fp);
	fclose(fp);
	return r;
}



Student insertAtFront(Student list, Student node){
	if(!node) return list;

	node->next = list;
	return node;
}

Student makeStudent(char *line){
	char * zid, *firstname, *lab, *grads, *lastname;

	zid = line;
	firstname = strchr(zid, ' ');
	firstname[0] = '\0';
	firstname++;
    
    lastname = strchr(firstname, ' ');
    lastname[0] = '\0';
    lastname++;

	lab = strchr(lastname, ' ' );
	*lab = '\0';
	lab++;

	grads = strchr(lab, ' ');

	*grads = '\0';
	grads++;

	Student s = malloc(sizeof(struct student));

	s->zid = atoi(zid);
	strcpy(s->name, lastname);
	strcpy(s->labname, lab);
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
	printf("%d, %s, %s, %s, %p\n", s->zid, s->name, s->labname, s->grades, s->next);
}
