//exercise 1

#include<stdio.h>


int main(){

FILE *fp;

int value,rel;

fp=fopen("two1.txt","w");

if(fp==NULL){
    printf("not");
    getch();
    exit(0);

}
else{
    printf("yes\n");
}

printf("enter value : ");
scanf("%c",&value);
printf("\n%d\n",value);
putw(value,fp);

fclose(fp);


fp=fopen("two1.txt","r");
printf("\n\n\n");

rel =getw(fp);
printf("%d",rel);
fclose(fp);


return 0;
}


















//exercise 2


















#include<stdio.h>


int main(){

FILE *fp;

char value,rel;

fp=fopen("two1.txt","w");

if(fp==NULL){
    printf("not");
    getch();
    exit(0);

}
else{
    printf("yes\n");
}

printf("enter value : ");
scanf("%c",&value);

fputc(value,fp);

fclose(fp);


fp=fopen("two1.txt","r");
printf("\n\n\n");

rel =fgetc(fp);
printf("%c",rel);
fclose(fp);


return 0;
}

















//exercise 3









#include<stdio.h>


int main(){

FILE *fp;

char value[300];

fp=fopen("twoone.txt","w");

if(fp==NULL){
    printf("not");
    getch();
    exit(0);

}
else{
    printf("yes\n");
}

printf("enter value : ");
scanf("%s",&value);

fprintf(fp,"%s",value);

fclose(fp);


return 0;
}















//exercise 4












#include<stdio.h>

struct stu{
char name[30];
int age;

};

int main(){

struct stu s;
FILE *fp;

char value[300];
char rel;

fp=fopen("twoone.txt","w");

if(fp==NULL){
    printf("not");
    getch();
    exit(0);

}
else{
    printf("yes\n");
}



printf("enter name : ");
fgets(s.name,sizeof(s.name),stdin);
printf("enter age : ");
scanf("%d",&s.age);

fwrite(&s,sizeof(s),1,fp);


fclose(fp);


fp=fopen("twoone.txt","r");


fread(&s,sizeof(s),1,fp);
printf("%s",s.name);
printf("%d",s.age);

fclose(fp);

return 0;
}
















//exercise 5











#include<stdio.h>
#include<stdlib.h>

int main(){


FILE *fp;

char value[300];
int val=0;

fp=fopen("twoone.txt","w");

if(fp==NULL){
    printf("not");
    getch();
    exit(0);

}
else{
    printf("yes\n");
}

while(val<2){

printf("enter name : ");
fgets(value,sizeof(value),stdin);
fprintf(fp,"%s",value);
val++;
}

fclose(fp);

fp=fopen("twoone.txt","r");

while(1){
    if(fgets(value,sizeof(value),fp)==NULL){
        break;
    }
    else{
        printf("%s",value);
    }
}

fclose(fp);


return 0;
}
