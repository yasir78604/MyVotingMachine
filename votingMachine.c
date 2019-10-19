#include<stdio.h>
#include<string.h>
int main()
{
	int party;
	int age;
	int i;
	char gen;
	char partyName[5];
	char mobile[10];
    char names[20], str[10];
    FILE *fp = NULL;
    fp = fopen("data.txt","a+");

    printf("\t\t\t\t\twelcome to voting system\n");
    printf("Enter your Name : ");
    gets(names);
	printf("enter the gender:");
	gen = getchar();
	if(gen=='M'||gen=='m')
	{
		printf("male");
	}
	if(gen=='F'||gen=='f')
	{
		printf("Female");
	}
    printf("Enter Your phone Number : ");
    while (1)
    {   
        scanf("%s",&mobile);
        i = strlen(mobile);
        if(i==10)
        break;
        else
        {
            printf("It is not a Valid Phone No. Please Enter a Valid Phone No. :  ");
        }
        
    }
    printf("\nenter the age:");
    scanf("%d",&age);   
    if(age>=18)
    {
	    printf("\t\t\t\t\teligibe to vote");
	    printf("\n1.aap\n2.cong\n3.bjp");
	    printf("\nchoose the no.:");
	    scanf("%d",&party);
	    switch(party)
	    {
		        case 1:
		    	    printf("\t\t\t\t\tcongractulation you successfully voted :aap\n");
                    strcpy(partyName,"aap");
		        	break;
		    	case 2:
			    	printf("\t\t\t\t\tcongractulation you successfully voted :cong\n");
				    break;
				case 3:
					printf("\t\t\t\t\tcongractulation you successfully voted :bjp\n");
					break;
				default:
					printf("you are not choosing anyone");
					break;
	    }
    }
    else
    {
		printf("\t\t\t\t\tnot eligible to vote\n");
	}
    
	fprintf(fp,"name        :   %s\n",names);
	fprintf(fp,"gen         :   %c\n",gen);
    fprintf(fp,"Mobile No.  :   %s\n",mobile);
	fprintf(fp,"age         :   %d\n",age);
	fprintf(fp,"party       :   %s\n",partyName);
    fclose(fp);
    if(fscanf(fp,"%d",age) == 18)
    {
       fscanf(fp,"%s",mobile);
        strcpy(str,mobile)
    }

    
        
	return 0;
}	
