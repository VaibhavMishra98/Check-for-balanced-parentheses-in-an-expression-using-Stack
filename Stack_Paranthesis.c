#include<stdio.h>
#include<conio.h>
char s[20];
int top=-1;
void push(char);
char pop();
int main()
{
char a[20],t;
int i,f=1;
printf("Enter the string\n");
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
    if(a[i]=='('||a[i]=='{'||a[i]=='[')
        push(a[i]);
    if(a[i]==')'||a[i]=='}'||a[i]==']')
    {
        if(top==-1)
            f=0;
        else
        {
            t=pop();
                if(a[i]==')'&&(t=='['||t=='{'))
                    f=0;
                if(a[i]=='}'&&(t=='('||t=='['))
                    f=0;
                if(a[i]==']'&&(t=='{'||t=='('))
                    f=0;
        }
    }
}
    if(top>=0)
        f=0;
    if(f==0)
        printf("Unbalanced\n");
    else
        printf("Balanced\n");
return 0;
}
void push(char a)
{
s[++top]=a;
}
char pop()
{
return s[top--];
}
