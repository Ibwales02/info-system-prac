#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[10];
	int age;
}student;
void inputSingle(student *st)//student st,st.name
{
    scanf("%s %d", st->name ,&st->age);
}

void outputSingle(student *st)
{
    printf("%s %d", st->name ,st->age);
}

void list(student st[], int n)

{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s %d\n", st[i].name, st[i].age);
    }
}
void find(char query[], student st[], int n)
{
     int flag = 0;
		    for(int i=0; i<n; i++)
		    {
		       if (strcmp(query, st[i].name)==0)
		       {
		           printf("%s %d\n",st[i].name, st[i].age);
		           flag = 1;
		       }
		    
	    	}
	    	if(flag==0)
	    	{
	    	    printf("Not found\n");
	    	}
	    	
}
int main()
{
	char cmd[10];
	student stu[100];
	int i = 0;;//index the number of student records stored.
	while(scanf("%s", cmd)!=EOF)
	{
		if(strcmp(cmd,"Insert")==0)
		{
			printf("Insert:\n");
			inputSingle(&stu[i]);
			outputSingle(&stu[i]);
			i++;
		}	
		
		if(strcmp (cmd, "List")==0)
		{
		    list(stu, i);
		}
		if(strcmp(cmd,"find")==0)
		{
		    char query[10];
		    scanf("%s", query) ;
		 
		 find(query,stu,i);
		if(strcmp(cmd,"Exit")==0||strcmp(cmd,"Quit")==0)
		{
			printf("Goodbye!\n");
			break;
		}
	}
	
}
	return 0;
}