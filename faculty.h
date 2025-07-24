#ifdef Faculty_H
#define Faculty_H

enum designation {

    lecturer =0,
    senior lecturer ,
    assistant professor,
    associate professor, 
};

struct faculty 
{
char *name;
char *id;


} faculty;

void add_faculty();

#endif