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
char course code;

} faculty;

void add_faculty();

#endif