#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                                                     // prototypes

int main_menu(int choice);                           //first interface (choices) prototype
int Select_Categories (int category, int choice);    //second interface (categories) prototype
void add_book(char fname[] );                        //third interface (add_book) prototype
void Delete_book(char fname[]);                      //forth interface (Delete_book) prototype
void edit_book(char fname[]);                        //fifth interface (edit_book) prototype
void View_Book_List(char fname[]);                   //sixth interface (View_Book_List) prototype
void search_book(char fname[]);                      //seventh interface (View_Book_List) prototype
void issue_book(char fname[]);                       //eighth interface (Issue_book) prototype
void view_issued(char fname[]);
int main()
{
                                                    // variables Declaration:{
    int choice = 1;
    int category = 1 ;
    char user_name;
    int password;

                                                    //}
    system("COLOR F2");

    printf("##########personal_info########\n\n");   //personal information{
    printf("#### Enter personal user_name \n");      //user name
    scanf("%s",&user_name);                          //scan the user name

    printf("#### Enter personal password \n");       //password
    scanf("%d",&password);                           //scan the password

    if (password == 12345)                           //check the password if true complete
    {

        choice = main_menu(choice);                      // function call for the choices
        category = Select_Categories(category ,choice);  // function call for the category


        if (choice == 1 && category ==1 ){           //if condition to choose one of the choices with the same category (no 1)
            add_book("Computer.txt");                // call for the add book function to change in computer text file
            }
        else if (choice == 2 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            Delete_book("Computer.txt");             // call for the delete book function to change in computer text file
            }
        else if (choice == 3 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            search_book("Computer.txt");             // call for the search book function to change in computer text file
            }
        else if (choice == 4 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            View_Book_List("Computer.txt");          // call for the view book list function to change in computer text file
            }
        else if (choice == 5 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            edit_book("Computer.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 6 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Computer");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Computer.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==1){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }



        else if (choice == 1 && category ==2 ){      //else if condition to choose one of the choices with the same category (no 2)
            add_book("Electronics.txt");             // call for the add book function to change in Electronics text file
            }
        else if (choice == 2 && category ==2){       //else if condition to choose one of the choices with the same category (no 2)
            Delete_book("Electronics.txt");          //call for the delete book function to change in Electronics text file
            }
        else if (choice == 3 && category ==2){       //else if condition to choose one of the choices with the same category (no 2)
            search_book("Electronics.txt");          // call for the search book function to change in Electronics text file
            }
        else if (choice == 4 && category ==2){       //else if condition to choose one of the choices with the same category (no 2)
            View_Book_List("Electronics.txt");       // call for the view book list function to change in Electronics text file
            }
        else if (choice == 5 && category ==2){       //else if condition to choose one of the choices with the same category (no 2)
            edit_book("Electronics.txt");            // call for the edit book function to change in Electronics text file
            }
        else if (choice == 6 && category ==2){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Electronics.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==2){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Electronics.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==2){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }




        else if (choice == 1 && category ==3 ){     //else if condition to choose one of the choices with the same category (no 2)
            add_book("Electrical.txt");
            }
        else if (choice == 2 && category ==3){      //else if condition to choose one of the choices with the same category (no 2)
            Delete_book("Electrical.txt");
            }
        else if (choice == 3 && category ==3){      //else if condition to choose one of the choices with the same category (no 2)
            search_book("Electrical.txt");
            }
        else if (choice == 4 && category ==3){      //else if condition to choose one of the choices with the same category (no 2)
            View_Book_List("Electrical.txt");
            }
        else if (choice == 5 && category ==3){      //else if condition to choose one of the choices with the same category (no 2)
            edit_book("Electrical.txt");
            }
        else if (choice == 6 && category ==3){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Electrical.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==3){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Electrical.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==3){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }




        else if (choice == 1 && category ==4 ){  //else if condition to choose one of the choices with the same category (no 2)
            add_book("Civil.txt");
            }
        else if (choice == 2 && category ==4){     //else if condition to choose one of the choices with the same category (no 2)
            Delete_book("Civil.txt");
            }
        else if (choice == 3 && category ==4){     //else if condition to choose one of the choices with the same category (no 2)
            search_book("Civil.txt");
            }
        else if (choice == 4 && category ==4){      //else if condition to choose one of the choices with the same category (no 2)
            View_Book_List("Civil.txt");
            }
        else if (choice == 5 && category ==4){       //else if condition to choose one of the choices with the same category (no 2)
            edit_book("Civil.txt");
            }
        else if (choice == 6 && category ==4){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Civil.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==4){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Civil.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==4){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }



        else if (choice == 1 && category ==5 ){     //else if condition to choose one of the choices with the same category (no 2)
            add_book("Mechanical.txt");
            }
        else if (choice == 2 && category ==5){      //else if condition to choose one of the choices with the same category (no 2)
            Delete_book("Mechanical.txt");
            }
        else if (choice == 3 && category ==5){     //else if condition to choose one of the choices with the same category (no 2)
            search_book("Mechanical.txt");
            }
        else if (choice == 4 && category ==5){      //else if condition to choose one of the choices with the same category (no 2)
            View_Book_List ("Mechanical.txt");
            }
        else if (choice == 5 && category ==5){      //else if condition to choose one of the choices with the same category (no 2)
            edit_book("Mechanical.txt");
            }
        else if (choice == 6 && category ==5){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Mechanical.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==5){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Mechanical.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==5){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }



        else if (choice == 1 && category ==6 ){  //else if condition to choose one of the choices with the same category (no 2)
            add_book("Architecture.txt");
            }
        else if (choice == 2 && category ==6){    //else if condition to choose one of the choices with the same category (no 2)
            Delete_book("Architecture.txt");
            }
        else if (choice == 3 && category ==6){    //else if condition to choose one of the choices with the same category (no 2)
            search_book("Architecture.txt");
            }
        else if (choice == 4 && category ==6){    //else if condition to choose one of the choices with the same category (no 2)
            View_Book_List("Architecture.txt");
            }
        else if (choice == 5 && category ==6){    //else if condition to choose one of the choices with the same category (no 2)
            edit_book("Architecture.txt");
            }
        else if (choice == 6 && category ==6){       //else if condition to choose one of the choices with the same category (no 1)
            issue_book("Architecture.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 7 && category ==6){       //else if condition to choose one of the choices with the same category (no 1)
            view_issued("Architecture.txt");               // call for the edit book function to change in computer text file
            }
        else if (choice == 8 && category ==6){       //else if condition to choose one of the choices with the same category (no 1)
            exit(0);                                 //close the program
            }

}
else{
    printf("password is in correct !!!");
    exit(0);
}
    return 0;
}


int main_menu(int choice)
{

    printf("########## Main Menu ##########\n\n");
    printf("### 1. Add Books \n" );
    printf("### 2. Delete books \n");
    printf("### 3. Search books \n");
    printf("### 4. View Book List \n");
    printf("### 5. Edit Books Record \n");
    printf("### 6. Issue Book \n");
    printf("### 7. Close application \n\n");
    printf("##############################\n");
    printf("Enter your choice: ",choice);
    scanf(" %d",&choice );

    return choice;
}

int Select_Categories (int category, int choice)
{

    printf("######### Select Categories #########\n\n");
    printf("### 1. Computer \n");
    printf("### 2. Electronics \n");
    printf("### 3. Electrical \n");
    printf("### 4. Civil\n");
    printf("### 5. Mechanical \n");
    printf("### 6. Architecture \n");
    printf("### 7. Back to main menu \n\n");
    printf("##############################\n");
    printf("Enter the category: ",category);
    scanf(" %d",&category );

    if (category ==  7)
    {
        choice = main_menu(choice);
        return category;
    }
    return category ;
}

void add_book(char fname[])
{
    char book_name[50], Author[50];
    int book_ID, Quantity, Price, Rack_No;
    FILE *fptr_file=fopen(fname,"a+");

      if(fptr_file == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("\n######### Enter the information bellow #########\n\n");

    printf("\n##  1- Enter the book name: ");
    scanf("%s", book_name);

    printf("\n##  2- Enter the book ID: ");
    scanf("%d", &book_ID);

    printf("\n##  3- Enter Author: ");
    scanf("%s", Author);

    printf("\n##  4- Enter Quantity: ");
    scanf("%d", &Quantity);

    printf("\n##  5- Enter Price: ");
    scanf("%d", &Price);

    printf("\n##  6- Enter Rack_No: ");
    scanf("%d", &Rack_No);

    printf("\n#################################################");

    fprintf(fptr_file,"\n|   Name    |   ID   |   Author   |    Quantity   |   Price   |  Rack No.  |");
    fprintf(fptr_file,"\n------------------------------------------------------------------------------\n");
    fprintf(fptr_file,"\n|    %s     |   %d   |     %s     |       %d      |    %d     |     %d     |", book_name,book_ID,Author,Quantity,Price,Rack_No);
    fprintf(fptr_file,"\n-------------------------------------------------------------------------------\n");
    fclose(fptr_file);

}

void Delete_book(char fname[])
{
    int MAX = 90;
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;

        char str[MAX], temp[] = "temp1.txt";
		printf("\n ############ delete file ############\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");

        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);

        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {

                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file
        rename(temp, fname); 	// rename the temporary file to original name
//------ Read the file ----------------
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
//------- End of reading ---------------


  }

void search_book(char fname[])
{
    int MAX = 200;
    int book_ID,lno, ctr = 0;
        FILE *fptr1;

        char line[MAX];
		printf("\n ############ Search book ############\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
            printf(" File not found or unable to open the input file!!\n");

        }

        printf(" Enter the ID you want to search for  : ");
        scanf("%d", &lno);

        while (fscanf(fptr1,"%s//%s\n",line)!=EOF)
        {
            sscanf(line,"%*[^0-9]%d",&book_ID);


                /* skip the line at given line number */
                if (lno == book_ID)
                {
                    printf( "%s", line);
                }
            }

        fclose(fptr1);
}

void View_Book_List(char fname[])
{
    int ctr = 0;
    int MAX = 10;
    int status;

    char str[MAX], temp[] = "temp.txt";
    char ch;
    FILE *fptr1, *fptr2;
    printf("\n ############ view book list ############\n");
    printf("-----------------------------------------\n");
    fptr1=fopen(fname,"r");
    ch=fgetc(fptr1);
    printf(" The content of the file %s is : \n\n",fname);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr1);
    }
    fclose(fptr1);
//------- End of reading ---------------


  }

void edit_book(char fname[])
{
    int book_ID, Quantity, Price, Rack_No;
    char book_name[50], Author[50];
    int MAX = 90;
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;

        char str[MAX], temp[] = "temp1.txt";
		printf("\n ############ edit file ############\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
               printf(" File not found or unable to open the input file!!\n");

        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);

        }
        printf(" Input the line you want to edit : ");
        scanf("%d", &lno);
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {

                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
                if (ctr == lno)
                {



    printf("\n######### Enter the information bellow #########\n\n");

    printf("\n##  1- Enter the book name: ");
    scanf("%s", book_name);

    printf("\n##  2- Enter the book ID: ");
    scanf("%d", &book_ID);

    printf("\n##  3- Enter Author: ");
    scanf("%s", Author);

    printf("\n##  4- Enter Quantity: ");
    scanf("%d", &Quantity);

    printf("\n##  5- Enter Price: ");
    scanf("%d", &Price);

    printf("\n##  6- Enter Rack_No: ");
    scanf("%d", &Rack_No);

    printf("\n#################################################");


    fprintf(fptr2,"%s//%d//%s//%d//%d//%d//\n", book_name,book_ID,Author,Quantity,Price,Rack_No);
                }

            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file
        rename(temp, fname); 	// rename the temporary file to original name
//------ Read the file ----------------
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
//------- End of reading ---------------


  }

void issue_book(char fname[])
{
    char student_name[100];
    int student_ID;
    int MAX = 200;
    int book_ID,lno, ctr = 0;
        FILE *fptr1;
FILE *fptr2;

char  temp[]="computeris.txt";

        char line[MAX];
		printf("\n ############ issue book ############\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
            printf(" File not found or unable to open the input file!!\n");

        }
         fptr2 = fopen(temp, "a"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);

        }

        printf(" Enter the ID you want to issue  : ");
        scanf("%d", &lno);

        while (fscanf(fptr1,"%s\n",line)!=EOF)
        {
            sscanf(line,"%*[^0-9]%d",&book_ID);




                /* skip the line at given line number */
                if (lno == book_ID)
                {

                    printf("\n##  Enter student name: ");
                    scanf("%s", student_name);

                    printf("\n##  Enter student ID: ");
                    scanf("%d", &student_ID);
                    fprintf(fptr2, "%s//%s//%d", line,student_name,student_ID);

                }
            }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file
        rename(temp, fname);
        }

void view_issued(char fname[])
{
    char student_name[100];
    int student_ID;
    int ctr = 0;
    int MAX = 200;
    int status;

    char str[MAX], temp[] = "temp.txt";
    char ch;
    FILE *fptr1, *fptr2;
    printf("\n ############ view book list ############\n");
    printf("-----------------------------------------\n");

//------ Read the file ----------------
    fptr1=fopen(fname,"r");
    ch=fgetc(fptr1);
    printf(" The content of the file %s is : \n\n",fname);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr1);
    }
    fclose(fptr1);
//------- End of reading ---------------

}



