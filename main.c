#include <stdio.h>
#include <stdlib.h>

int num;
char let,ret;


int main()
{


   system("cls");

   system("color 0A");
   printf(" _______    ______   ______  ________         ______    ______ \n");
   printf("|       \\  /      \\ |      \\|        \\       /      \\  /      \\ \n");
   printf("| $$$$$$$\\|  $$$$$$\\ \\$$$$$$ \\$$$$$$$$      |  $$$$$$\\|  $$$$$$\ \n");
   printf("| $$__/ $$| $$___\\$$  | $$     | $$         | $$ __\\$$ \\$$__| $$ \ \n");
   printf("| $$    $$ \\$$    \\   | $$     | $$         | $$|    \\ /      $$ \n");
   printf("| $$$$$$$\\ _\\$$$$$$\\  | $$     | $$         | $$ \\$$$$|  $$$$$$ \n");
   printf("| $$__/ $$|  \\__| $$ _| $$_    | $$         | $$__| $$| $$_____ \n");
   printf("| $$    $$ \\$$    $$|   $$ \\   | $$          \\$$    $$| $$     \ \n");
   printf(" \\$$$$$$$   \\$$$$$$  \\$$$$$$    \\$$           \\$$$$$$  \\$$$$$$$$ \n\n");
   printf(" DO YOU WANT TO USE THIS PROGRAM [Y/N]: ");
   scanf("%c",&let);

    if (let=='N' || let=='n')
     {
      return 0;
     }

    do{
    if (let=='Y' || let=='y')
   {
   system("color 0E");
   system("cls");

   printf("   ____________________________________________________________________  \n");
   printf(" /  \\                                                                  \\. \n");
   printf("|    |                                                                  |. \n");
   printf(" \\_  |                                                                  |. \n");
   printf("     |                                                                  |. \n");
   printf("     |                  --------- PROGRAM MENU ---------                |. \n");
   printf("     |                                                                  |. \n");
   printf("     |        [1]AREA OF THE TRIANGLE      [7]OPERATOR                  |. \n");
   printf("     |        [2]CONVERTION                [8]POSITIVE OR NEGATIVE       |. \n");
   printf("     |        [3]COLOR SELECTION           [9]QUALIFIED TO VOTE         |. \n");
   printf("     |        [4]INCREMENT AND DECREMENT   [10]REGISTRATION FORM        |. \n");
   printf("     |        [5]EXPONENTIATION            [11]THE CHINESE ZODIAC       |. \n");
   printf("     |        [6]GRADE CALCULATOR          [12]BASIC CALCULATOR         |. \n");
   printf("     |                                                                  |. \n");
   printf("     |                           [13]LOOPING                            |. \n");
   printf("     |                                                                  |. \n");
   printf("     |                                                                  |. \n");
   printf("     |                                                                  |. \n");
   printf("     |                                                                  |. \n");
   printf("     |   _______________________________________________________________|___ \n");
   printf("     |  /                                                                  /. \n");
   printf("     \\_/__________________________________________________________________/. \n");
   printf("            _____.___.  _____   ____  __.____ ___.____  ___________ \n");
   printf("            \\__  |   | /  _  \\ |    |/ _|    |   \\    | \\__    ___/ \n");
   printf("             /   |   |/  /_\\  \\|      < |    |   /    |   |    | \n");
   printf("             \\____   /    |    \\    |  \\|    |  /|    |___|    | \n");
   printf("             / ______\\____|__  /____|__ \\______/ |_______ \\____| \n");
   printf("             \\/              \\/        \\/                \\/     \n");
   printf("\nCHOOSE A NUMBER: ");
   scanf("%d",&num);

   system("cls");

     switch(num){
     case 1:
    {
       char let1;
       do{
       system("cls");
       float b, h, A;
       printf("Enter the value of base: ");
       scanf("%f", &b);
       printf("Enter the value of height: ");
       scanf("%f", &h);

       A=(b*h)/2;

       system("cls");

       printf("The value of area is equal to %.2f, ",A);
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');

    }
     break ;



     case 2:
    {
       int num;
       printf("1.CELSIUS - FARENHEIT: \n");
       printf("2.FARENHEIT - CELSIUS: \n");
       printf("Choose a number: ");
       scanf("%d",&num);
        switch(num){
          case 1:
          {
            char let1;
            do{
            system("cls");
            float c, f;
            printf("temperature of celcius:");
            scanf("%f", &c);

            f=(c*9/5)+32;

            system("cls");
            printf("Farenheit is %.2f", f);
            printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
            scanf("%s", &let1);
            }while (let1=='Y' ||let1=='y');
          }
          break ;
          case 2:
          {
            char let1;
            do{
            system("cls");
            float c, f;
            printf("temperature of farenheit:");
            scanf("%f", &f);

            c=(f-32)*5/9;

            system("cls");
            printf("Celcius is %.2f", c);
            printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
            scanf("%s", &let1);
            }while (let1=='Y' ||let1=='y');
          }
          break ;
          default:
          printf("out of range");}

    }
     break ;

     case 3:
    {
       char let1;
       do{
       system("cls");
       char color;

       printf("Enter The First Character of Color:");
       scanf("%s",&color );

       if (color=='B'||color=='b')
       printf("Blue");
       else if(color=='R'||color=='r')
       printf("RED");
       else if(color=='G'||color=='g')
       printf("GREEN");
       else if(color=='Y'||color=='y')
       printf("Yellow");
       else
       printf("unknown Color");
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
    }
     break ;

     case 4:
    {
       system("cls");
       system("color 0C");
       printf("[1]PRE-INCREMENT: \n");
       printf("[2]POST-INCREMENT: \n");
       printf("[3]PRE-DECREMENT: \n");
       printf("[4]POST-DECREMENT: \n");
       printf("[5]INCREMENT: \n");
       printf("[6]DECREMENT: \n");
       printf("\nCHOOSE A NUMBER: ");
       scanf("%d",&num);
        switch(num){
          case 1:
          { // PRE-INCREMENT
            // declare intreger variables
           char let1;
           do{
           system("cls");
           int x, y, z;
           printf(" Input the value of X: ");
           scanf(" %d", &x);
           printf(" Input the value of Y: ");
           scanf(" %d", &y);
           printf(" Input the value of Z: ");
           scanf(" %d", &z);

           // use pre increment operator to update the value by 1

           ++x;
           ++y;
           ++z;

           printf(" \n The updated value of the X: %d ", x);
           printf(" \n The updated value of the Y: %d ", y);
           printf(" \n The updated value of the Z: %d ", z);
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');
          }
          break ;
          case 2:
          {
           // POST INCREMENT
           // declare intreger variables
           char let1;
           do{
           system("cls");
           int x, y, z, a, b, c;
           printf(" Input the value of X: ");
           scanf(" %d", &x);
           printf(" Input the value of Y: ");
           scanf(" %d", &y);
           printf(" Input the value of Z: ");
           scanf(" %d", &z);

           // use post increment operator to update the value by 1

           a = x++;
           b = y++;
           c = z++;

           printf(" \n The original value of the a: %d ", a);
           printf(" \n The original value of the b: %d ", b);
           printf(" \n The original value of the c: %d ", c);
           printf(" \n\n The updated value of the X: %d ", x);
           printf(" \n The updated value of the Y: %d ", y);
           printf(" \n The updated value of the Z: %d ", z);
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');

          }
          break ;
          case 3:
          {
           // declare intreger variables
           char let1;
           do{
           system("cls");
           int x, y, z;
           printf(" Input the value of X: ");
           scanf(" %d", &x);
           printf(" Input the value of Y: ");
           scanf(" %d", &y);
           printf(" Input the value of Z: ");
           scanf(" %d", &z);

           --x;
           --y;
           --z;

           printf(" \n The original value of the X: %d ", x);
           printf(" \n The original value of the Y: %d ", y);
           printf(" \n The original value of the Z: %d ", z);
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');


          }
          break ;
          case 4:
          {
           char let1;
           do{
           system("cls");
           // declare intreger variables
           int x, y, z, a, b, c;

           printf(" Input the value of X: ");
           scanf(" %d", &x);
           printf(" Input the value of Y: ");
           scanf(" %d", &y);
           printf(" Input the value of Z: ");
           scanf(" %d", &z);


           a = x--;
           b = y--;
           c = z--;

           printf(" \n The original value of the a: %d ", a);
           printf(" \n The original value of the b: %d ", b);
           printf(" \n The original value of the c: %d ", c);

           printf(" \n\n The original value of the X: %d ", x);
           printf(" \n The original value of the Y: %d ", y);
           printf(" \n The original value of the Z: %d ", z);
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');
          }
          break ;
          case 5:
          {
           char let1;
           do{
           system("cls");
           system("color 0B");

           int start, in, stop;

           printf("Enter the initial value:");
           scanf("%i", &start);

           printf("You want to increase by what number?:");
           scanf("%i", &in);

           printf("You want to stop by what number?:");
           scanf("%i", &stop);

           while (start <= stop) {

           printf("%d\n", start);

           start += in;
            }
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');
          }
          break ;
          case 6:
          {
           char let1;
           do{
           system("cls");
           system("color FD");

           int start, stop, decre;

           printf("Enter the initial value?: ");
           scanf("%i",&start);

           printf("Enter the decrement value?: ");
           scanf("%i",&decre);

           printf("Enter the last value?: ");
           scanf("%i",&stop);

           while (start>=stop) {

           printf("%i \n", start);
           start -= decre;}
          printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
          scanf("%s", &let1);
          }while (let1=='Y' ||let1=='y');
          }
          break ;

          default:
          printf("out of range");}

     }
     break ;

     case 5:
    {
       char let1;
       do{
       system("cls");
       float ans, val, base, exponent;
       printf("enter the base: ");
       scanf("%f",&base);
       printf("enter the exponent: ");
       scanf("%f",&exponent);
       val = pow(base, exponent);
       printf(" %.2f raise to the power of %.2f is equal to %.2f ",base,exponent,val);
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
    }
      break ;

     case 6:
    {

       system("cls");
       int num;
       printf("GRADE CALCULATOR\n");
       printf("1.GRADE COMPUTATION: \n");
       printf("2.GRADE RANGE: \n");
       printf("Choose a number: ");
       scanf("%d",&num);
       switch(num){
       case 1:
       {

            char let1;
            do{
            system("cls");
            float Quiz,Ass,Proj,Class,Major,LGRADE;
            printf(" GRADE CALCULATION \n");

            printf("Quiz Grade:");
            scanf("%f",&Quiz);

            printf("Assignment Grade:");
            scanf("%f",&Ass);

            printf("Project Grade:");
            scanf("%f",&Proj);

            printf("Class Standing Grade");
            scanf("%f",&Class);

            printf("Major Exam Grade:");
            scanf("%f",&Major);

            system("cls");
            LGRADE = Quiz*0.15+Ass*0.15+Proj*0.2+Class*0.1+Major*0.4;

            if(LGRADE>=75)
            {
            printf("LECTURE GRADE IS %.2f PASSED",LGRADE);
            }
            if(LGRADE<75)
            {
            printf("LECTURE GRADE IS %.2f FAILED",LGRADE);
            }

            printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
            scanf("%s", &let1);
            }while (let1=='Y' ||let1=='y');

       }
       break ;

      case 2:
     {
           char let1;
           do{
           system("cls");
           float grade;

           printf("Enter you grade: ");
           scanf("%f", &grade);
           if (grade>=90&&grade <=100) {
           printf("GRADE: A");
           }
           else if (grade>=80&&grade <90) {
           printf("GRADE: B");
           }
           else if (grade>=70&&grade <80) {
           printf("GRADE: C");
           }
           else if (grade>=60&&grade <70) {
           printf("GRADE: D");
           }
           else if (grade>=0&&grade <60) {
           printf("GRADE: E");
           }
           else
           {
           printf("OUT OF RANGE\n");
           }
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
          }while (let1=='Y' ||let1=='y');

          }
          break;
          default:
          printf("out of range");}

    }
     break ;

     case 7:
    {
       system("cls");
       int num;
       printf("OPERATOR\n");
       printf("[1]LOGICAL OPERATOR: \n");
       printf("[2]RELATIONAL OPERATOR: \n");
       printf("Choose a number: ");
       scanf("%d",&num);
        switch(num){
          case 1:
          {
           char let1;
           do{
           system("cls");
           int x,y,a,b;
           printf("Enter the first number: ");
           scanf("%d",&x);
           printf("Enter the second number: ");
           scanf("%d",&y);
           printf("Enter the third number: ");
           scanf("%d",&a);
           printf("Enter the Last number: ");
           scanf("%d",&b);

           if(x<y && a==b)
          {
           printf("%d is less than %d AND %d is equal to %d\n",x,y,a,b);
          }

           if (x<y || a==b)
          {
           printf("%d is less than %d OR %d is equal to %d\n",x,y,a,b);
          }

           if (! (x>=y || a==b) )
          {
           printf("NOT OPERATION\n");
          }

           printf("PLEASE TYPE ANOTHER NUMBER");
           printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s", &let1);
           }while (let1=='Y' ||let1=='y');

          }
           break ;
           case 2:
          {
           char let1;
           do{
           system("cls");
           int x,y;
           system("cls");
           printf("Enter the first number: ");
           scanf("%d",&x);
           printf("Enter the second number: ");
           scanf("%d",&y);

            if(x==y)
            {
            printf("Both variables are equal\n");
            }

            if(x>y)
            {
            printf("%d is greater than %d\n",x,y);
            }

            if(x<y)
            {
            printf("%d is less than %d\n",x,y);
            }

            if(x!=y)
            {
            printf("%d is not equal to %d \n",x,y);
            }

            if(x<=y)
            {
            printf("%d is less than or equal to %d \n",x,y);
            }

            if(x>=y)
            {
            printf("%d is greater or equal to %d \n",x,y);
            }
             printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
             scanf("%s", &let1);
             }while (let1=='Y' ||let1=='y');
            break ;
            default:
            printf("out of range");}

     }
       break ;

      case 8:
     {
       char let1;
       do{
       system("cls");
       float num;
       system("cls");
       printf("B. POSITIVE OR NEGATIVE\n");
       printf("Enter a number:");
       scanf("%f", &num);
       if(num>=0)
       {
       printf("POSITIVE NUMBER");
       }
       else
       printf("NEGATIVE NUMBER");

       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');

     }
      break ;

     case 9:
     {
       char let1;
       do{
       system("cls");
       int age;
       printf("A. QUALIFIED TO VOTE\n");
       printf("Enter your age:");
       scanf("%i", &age);
       if(age>=18)
       {
       printf("QUALIFIED TO VOTE");
       }
       else
       {
       printf("TOO YOUNG");
       }
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
     }
     break ;

     case 10:
     {
       char let1;
       do{
       system("cls");
       int age;
       float grade;
       char name[50] , address[55] , contact[11] , birthday[20], email[50] , citizenship[15] , father[25] , mother[25],fcho[10] , scho[10] , tcho[10];
       system("cls");
       system("color 1C");
       printf("\n------> REGISTRATION FORM <------\n\n");
       printf("What is your name: ");
       scanf(" %50[^\n]" , &name);
       printf("How old are you: ");
       scanf("%d" , &age);
       printf("When is your birthday: ");
       scanf(" %20[^\n]" , &birthday);
       printf("What is your address: ");
       scanf(" %55[^\n]" , &address);
       printf("What is your contact number: ");
       scanf(" %11[^\n]" , &contact);
       printf("What is your email address: ");
       scanf(" %50[^\n]" , &email);
       printf("What is your citizenship: ");
       scanf(" %15[^\n]" , &citizenship);
       printf("What is the name of your father: ");
       scanf(" %25[^\n]" , &father);
       printf("What is the name of your Mother: ");
       scanf(" %25[^\n]" , &mother);
       printf("What is the highest grade you acquired in shs: ");
       scanf("%f" , &grade);
       printf("\n\n------ EDUCATIONAL ATTAINMENT ------\n\n");
       printf("What college course is your first choice: ");
       scanf(" %10[^\n]" , &fcho);
       printf("What college course is your second choice: ");
       scanf(" %10[^\n]" , &scho);
       printf("What college course is your third choice: ");
       scanf(" %10[^\n]" , &tcho);
       system("cls");
       system("color 0a");
       printf(" -------- REGISTRATION FORM --------\n\n");
       printf(" NAME: %s \n ", name);
       printf("AGE: %d YRS OLD \n ", age);
       printf("BIRTHDAY: %s \n " , birthday);
       printf("CONTACT NO.: %s \n " , contact);
       printf("EMAIL: %s \n ", email);
       printf("CITIZENSHIP: %s \n ", citizenship);
       printf("FATHER'S NAME: %s \n ", father);
       printf("MOTHER'S NAME: %s \n ", mother);
       printf("HIGHEST GRADE YOU ACQUIRED: %.2f \n\n ", grade);
       printf("----- EDUCATIONAL ATTAINMENT ------\n\n");
       printf(" 1ST CHOICE: %s \n ", fcho);
       printf("SECOND CHIOCE: %s \n ", scho);
       printf("3RD CHOICE: %s \n ", tcho);
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
     }
      break ;

     case 11:
    {
       char let1;
       do{
       system("cls");
       float monthtod,daytod,yeartod,montbirt,daybirt,yearbirt,con1,con2,monkey,Dragon,Ship,Dog,Pig,Snake,Tiger,Rat,Rabbit,Horse,Rooster,Ox;
       char name[50];

       printf("   ,-----------.                 NOTE!: \n");
       printf("  (_\\   WELCOME  \\    THIS PROGRAM IS NOT CREATED \n");
       printf("     |  TO THE   |       FOR LEAPERS/LEAPLINGS\n");
       printf("     |  CHINESE  |\n");
       printf("    _|   ZODIAC  |\n");
       printf("   (_/_____(*)___/\n");
       printf("            \\\n");
       printf("             ))\n");
       printf("             ^\n");

       printf("ENTER YOUR NAME: ");
       scanf(" %50[^\n]",&name);
       printf("\n---ENTER THE DATE TODAY---\n");
       printf("ENTER THE MONTH: ");
       scanf("%f",&monthtod );
       printf("ENTER THE DAY: ");
       scanf("%f",&daytod );
       printf("ENTER THE YEAR: ");
       scanf("%f",&yeartod );
       printf("\n---ENTER YOUR BIRTHDAY---\n");
       printf("ENTER THE MONTH: ");
       scanf("%f",&montbirt );
       printf("ENTER THE DAY: ");
       scanf("%f",&daybirt );
       printf("ENTER THE YEAR: ");
       scanf("%f",&yearbirt );
       system("cls");

       con1=(yeartod - yearbirt);
       con2=(yeartod - yearbirt)-1;

       printf("Name: %s \n", name);

       if((montbirt<monthtod&&montbirt<=12&&monthtod<=12&&montbirt>0&&monthtod>0)&&(daybirt>=daytod||daybirt<daytod)&&(daybirt<=31&&daytod<=31&&daybirt>0&&daytod>0)&&(yeartod>0&&yearbirt>0))
      {
       printf("YOUR AGE IS: %.0f",con1);
      }
      else if((montbirt>monthtod&&montbirt<=12&&monthtod<=12&&montbirt>0&&monthtod>0)&&(daybirt>=daytod||daybirt<daytod)&&(daybirt<=31&&daytod<=31&&daybirt>0&&daytod>0)&&(yeartod>0&&yearbirt>0))
      {
       printf("YOUR AGE IS: %.0f",con2);
      }
      else if((montbirt==monthtod&&montbirt<=12&&monthtod<=12&&montbirt>0&&monthtod>0)&&(daybirt<=daytod)&&(daybirt<=31&&daytod<=31&&daybirt>0&&daytod>0)&&(yeartod>0&&yearbirt>0))
      {
       printf("YOUR AGE IS: %.0f ",con1);
      }
      else if((montbirt==monthtod&&montbirt<=12&&monthtod<=12&&montbirt>0&&monthtod>0)&&(daybirt>daytod)&&(daybirt<=31&&daytod<=31&&daybirt>0&&daytod>0)&&(yeartod>0&&yearbirt>0))
      {
       printf("YOUR AGE IS: %.0f \n",con1);
       printf("YOUR BIRTHDAY IS COMING UP, ADVANCE HAPPY BIRTHDAY");
      }
      else
      printf("ERROR: SORRY I CAN'T DISPLAY YOUR AGE , YOU HAVE ENTER AN OUT OF RANGE MONTH/DAY/YEAR  ");



      if ((yearbirt == 2004)||(yearbirt == 2016)||(yearbirt == 2028)||(yearbirt == 1932)||(yearbirt == 1944)||(yearbirt == 1956)||(yearbirt == 1968)||(yearbirt == 1980)||(yearbirt == 1992))
      {
       system("color 0E");
       printf("\nYEAR OF THE MONKEY\n");
       printf("                             _____________________\n");
       printf("          __               =(_    __      __     _)=\n");
       printf("     w  c(..)o   (           |  PERSONAL TRAITS  |\n");
       printf("      \\__(-)    __)          |                   |\n");
       printf("          /\\   (             |       Sharp       |\n");
       printf("         /(_)___)            |       Smart       |\n");
       printf("         w /|                |     Curiosity     |\n");
       printf("          | \\                |                   |\n");
       printf("         m  m                |__    _   __    ___|\n");
       printf("                           =(_____________________)=\n");
      }

        else if ((yearbirt == 1928)||(yearbirt == 1940)||(yearbirt == 1952)||(yearbirt == 1964)||(yearbirt == 1976)||(yearbirt == 1988)||(yearbirt == 2000)||(yearbirt == 2012)||(yearbirt == 2024))
      {
       system("color 0B");
       printf("\nYEAR OF THE DRAGON\n");
       printf("              __                  __\n");
       printf("             ( _)                ( _)\n");
       printf("            / / \\\\              / /\\_\\_\n");
       printf("           / /   \\\\            / / | \\ \\               _____________________\n");
       printf("          / /     \\\\          / /  |\\ \\ \\            =(_    __      __     _)=\n");
       printf("         /  /   ,  \\ ,       / /   /|  \\ \\             |  PERSONAL TRAITS  |\n");
       printf("        /  /    |\\_ /|      / /   / \\   \\_\\            |                   |\n");
       printf("       /  /  |\\/ _ '_|\\    / /   /   \\    \\\\           |     Confident     |\n");
       printf("      |  /   |/  0 \\0\\ \\  / |    |    \\    \\\\          |    Intelligent    |\n");
       printf("      |    |\\|      \\_\\_ /  /    |     \\    \\\\         |   Enthusiasthic   |\n");
       printf("      |  | |/    \\.\\ o\\o)  /      \\     |    \\\\        |                   |\n");
       printf("      \    |     /\\\\`v-v  /        |    |     \\\\        |__    _   __    ___|\n");
       printf("       | \/    /_| \\\\_|  /         |    | \\    \\\\     =(_____________________)=\n");
       printf("       | |    /__/_     /   _____  |    |  \\    \\\\\n");
       printf("       \\|    [__]  \\_/  |_________  \\   |   \\    ()\n");
       printf("        /    [___] (    \\         \\  |\\ |   |   //\n");
       printf("       |    [___]                  |\\| \\|   /  |/\n");
       printf("      /|    [____]                  \  |/\\ / / ||\n");
       printf("     (  \\   [____ /     ) _\\      \\  \\    \\| | ||\n");
       printf("      \  \\  [_____|    / /     __/    \\   / / //\n");
       printf("      |   \\ [_____/   / /        \\    |   \/ //\n");
       printf("      |   /  '----|   /=\\____   _/    |   / //\n");
       printf("   __ /  /        |  /   ___/  _/\\    \\  | ||\n");
       printf("  (/-(/-\\)       /   \\  (/\\/\\)/  |    /  | /\n");
       printf("                (/\\/\\)           /   /   //\n");
       printf("                       _________/   /    /\n");
       printf("                      \\____________/    (\n");
      }

        else if ((yearbirt == 1931)||(yearbirt == 1943)||(yearbirt == 1955)||(yearbirt == 1967)||(yearbirt == 1979)||(yearbirt == 1991)||(yearbirt == 2003)||(yearbirt == 2015)||(yearbirt == 2027))
      {
       system("color 0F");
       printf("\nYEAR OF THE GOAT\n");
       printf("                                _____________________\n");
       printf("                              =(_    __      __     _)=\n");
       printf("         _))                    |   PERSONAL TRAITS |\n");
       printf("        > *\\     _~             |                   |\n");
       printf("        `;'\\\\__-' \\_            |       Calm        |\n");
       printf("           | )  _ \\ \\           |      Gentle       |\n");
       printf("          / / ``   w w          |    Sympathetic    |\n");
       printf("         w w                    |                   |\n");
       printf("                                |__    _   __    ___|\n");
       printf("                              =(_____________________)=\n");
       }

        else if ((yearbirt == 1934)||(yearbirt == 1946)||(yearbirt == 1958)||(yearbirt == 1970)||(yearbirt == 1982)||(yearbirt == 1994)||(yearbirt == 2006)||(yearbirt == 2018)||(yearbirt == 2030))
       {
       system("color 0B");
       printf("\nYEAR OF THE DOG\n");
       printf("            ,           _____________________\n");
       printf("            |`-.__    =(_    __      __     _)=\n");
       printf("            / ' _/      |   PERSONAL TRAITS |\n");
       printf("           ****`        |                   |\n");
       printf("          /    }        |      Lovely       |\n");
       printf("         /  \\ /         |      Honest       |\n");
       printf("     \\ /`   \\\\\\         |      Prudent      |\n");
       printf("      `\    /_\\\\         |                   |\n");
       printf("       `~~~~~``~`       |__    _   __    ___|\n");
       printf("                      =(_____________________)=\n");
        }

         else if ((yearbirt == 1935)||(yearbirt == 1947)||(yearbirt == 1959)||(yearbirt == 1971)||(yearbirt == 1983)||(yearbirt == 1995)||(yearbirt == 2007)||(yearbirt == 2019)||(yearbirt ==2031))
        {
       system("color 0D");
       printf("\nYEAR OF THE PIG\n");
       printf("                                 _____________________\n");
       printf("       _                       =(_    __      __     _)=\n");
       printf("         <`--'\\>______           |  PERSONAL TRAITS  |\n");
       printf("         /. .  `'     \\          |                   |\n");
       printf("        (`')  ,        @         |   Compassionate   |\n");
       printf("         `-._,        /          |      Generous     |\n");
       printf("            )-)_/--( >           |      Diligent     |\n");
       printf("           ''''  ''''            |                   |\n");
       printf("                                 |__    _   __    ___|\n");
       printf("                               =(_____________________)=\n");
        }

         else if ((yearbirt == 1929)||(yearbirt == 1941)||(yearbirt == 1953)||(yearbirt == 1965)||(yearbirt == 1977)||(yearbirt == 1989)||(yearbirt == 2001)||(yearbirt == 2013)||(yearbirt == 2025))
        {
       system("color 0A");
       printf("\nYEAR OF THE SNAKE\n");
       printf("                                                     _____________________\n");
       printf("                                                   =(_    __      __     _)=\n");
       printf("    _                   .-=-.          .-==-.        |  PERSONAL TRAITS  |\n");
       printf("   { }      __        .' O o '.       /  -<' )       |                   |\n");
       printf("   { }    .' O'.     / o .-. O \\    /  .--v`         |     Enigmatic     |\n");
       printf("   { }   / .-. o\\   /O  /   \\  o\\   /O /             |    Intelligent    |\n");
       printf("    \\ `-` /   \\ O`-'o  /     \\  O`-`o /              |       Wise        |\n");
       printf("     `-.-`     '.____.'        `.____.'              |                   |\n");
       printf("                                                     |__    _   __    ___|\n");
       printf("                                                   =(_____________________)=\n");
        }

         else if ((yearbirt == 1926)||(yearbirt == 1938)||(yearbirt == 1950)||(yearbirt == 1962)||(yearbirt == 1974)||(yearbirt == 1986)||(yearbirt == 1998)||(yearbirt == 2010)||(yearbirt == 2022))
        {
       system("color 0E");
       printf("\nYEAR OF THE TIGER\n");
       printf("                  __,,,,_                                 _____________________\n");
       printf("          _ __..-;''`--/'/ /.',-`-.                     =(_    __      __     _)=\n");
       printf("      (`/' ` |  \\ \\ \\\\ / / / / .-'/`,_                    |  PERSONAL TRAITS  |\n");
       printf("     /'`\\ \\   |  \\ | \\| // // / -.,/_,'-,                 |                   |\n");
       printf("    /<7' ;  \\ \\  | ; ||/ /| | \\/    |`-/,/-.,_,/')        |       Brave       |\n");
       printf("   /  _.-, `,-\\,__|  _-| / \\ \\/|_/  |    '-/.;.\\'         |     Confident     |\n");
       printf("   `-`  f/ ;      / __/ \\__ `/ |__/ |                     |    Competetive    |\n");
       printf("        `-'      |  -| =|\\_  \\  |-' |                     |                   |\n");
       printf("              __/   /_..-' `  ),'  //                     |__    _   __    ___|\n");
       printf("         ((__.-'((___..-'' \\__.'                        =(_____________________)=\n");
        }

         else if ((yearbirt == 1924)||(yearbirt == 1936)||(yearbirt == 1948)||(yearbirt == 1960)||(yearbirt == 1972)||(yearbirt == 1996)||(yearbirt == 2008)||(yearbirt == 2015)||(yearbirt ==2020))
        {
       system("color 01");
       printf("\nYEAR OF THE RAT\n");
       printf("                                    _____________________\n");
       printf("                                  =(_    __      __     _)=\n");
       printf("           .  ,                     |  PERSONAL TRAITS  |\n");
       printf("          (\\;/)                     |                   |\n");
       printf("          oo   \\//,        _        |   Quick-witted    |\n");
       printf("        ,/_;~      \\,     / '       |    Resourceful    |\n");
       printf("         ''   (  (   \\    !         |     Versatile     |\n");
       printf("              //  \\   |__.'         |       kind        |\n");
       printf("           '~  '~----''             |__    _   __    ___|\n");
       printf("                                  =(_____________________)=\n");
        }

         else if ((yearbirt == 1927)||(yearbirt == 1939)||(yearbirt == 1951)||(yearbirt == 1963)||(yearbirt == 1975)||(yearbirt == 1987)||(yearbirt == 1999)||(yearbirt == 2011)||(yearbirt == 2023))
        {
       printf("\nYEAR OF THE RABBIT\n");
       system("color 0B");
       printf("                                   _____________________\n");
       printf("                                 =(_    __      __     _)=\n");
       printf("               ,\\                  |  PERSONAL TRAITS |\n");
       printf("               \\\\\\,_               |                   |\n");
       printf("                \\` ,\\              |      Animated     |\n");
       printf("           __,.-' =__)             |       Active      |\n");
       printf("         .'        )               |     Energetic     |\n");
       printf("      ,_/   ,    \\/\\_              |                   |\n");
       printf("      \\_|    )_-\\ \\_--`            |__    _   __    ___|\n");
       printf("         `-----` `--`            =(_____________________)=\n");
        }

         else if ((yearbirt == 1930)||(yearbirt == 1942)||(yearbirt == 1954)||(yearbirt == 1966)||(yearbirt == 1978)||(yearbirt == 1990)||(yearbirt == 2002)||(yearbirt == 2014)||(yearbirt == 2026))
        {
       system("color 0B");
       printf("\nYEAR OF THE HORSE\n");
       printf("                      _____________________\n");
       printf("                    =(_    __      __     _)=\n");
       printf(" ,~~_                 |  PERSONAL TRAITS  |\n");
       printf(" |/\\ =_ _ ~           |                   |\n");
       printf("  _( )_( )\\~~         |     Animated      |\n");
       printf("  \\,\\  _|\\ \\~~~       |      Active       |\n");
       printf("    \\`   \\            |     Energetic     |\n");
       printf("     `    `           |                   |\n");
       printf("                      |__    _   __    ___|\n");
       printf("                    =(_____________________)=\n");
        }

         else if ((yearbirt == 1933)||(yearbirt == 1945)||(yearbirt == 1957)||(yearbirt == 1969)||(yearbirt == 1981)||(yearbirt == 1993)||(yearbirt == 2005)||(yearbirt == 2017)||(yearbirt == 2029))
        {
       system("color 0C");
       printf("\nYEAR OF THE ROOSTER\n");
       printf("                            ~-.\n");
       printf("          ,,,;            ~-.~-.~-\n");
       printf("         (.../           ~-.~-.~-.~-.~-.       _____________________\n");
       printf("         (.../           ~-.~-.~-.~-.~-.     =(_    __      __     _)=\n");
       printf("         } o~`,         ~-.~-.~-.~-.~-.~-.     |  PERSONAL TRAITS  |\n");
       printf("         (/    \\      ~-.~-.~-.~-.~-.~-.~-.    |                   |\n");
       printf("          ;    \\    ~-.~-.~-.~-.~-.~-.~-.      |     Observant     |\n");
       printf("         ;     {_.~-.~-.~-.~-.~-.~-.~          |    Hardworking    |\n");
       printf("        ;:  .-~`    ~-.~-.~-.~-.~-.            |     Courageous    |\n");
       printf("       ;.: :'    ._   ~-.~-.~-.~-.~-           |                   |\n");
       printf("        ;::`-.    '-._  ~-.~-.~-.~-            |__    _   __    ___|\n");
       printf("         ;::. `-.    '-,~-.~-.~-.            =(_____________________)=\n");
       printf("          ';::::.`''-.-'\n");
       printf("            ';::;;:,:'\n");
       printf("               '||''\n");
       printf("               / |  \n");
       printf("             ~` ~'''\n");
        }

         else if ((yearbirt == 1925)||(yearbirt == 1937)||(yearbirt == 1949)||(yearbirt == 1961)||(yearbirt == 1973)||(yearbirt == 1985)||(yearbirt == 1977)||(yearbirt == 2009)||(yearbirt == 2021))
        {
       system("color 0C");
       printf("\nYEAR OF THE OX\n");
       printf("    ,           ,             _____________________\n");
       printf("   /             \\          =(_    __      __     _)=\n");
       printf("  ((__-^^-,-^^-__))           |  PERSONAL TRAITS  |\n");
       printf("   `-_---' `---_-'            |                   |\n");
       printf("    <__|o` 'o|__>             |     Diligent      |\n");
       printf("       \\  `  /                |    Dependable     |\n");
       printf("        ): :(                 |      Strong       |\n");
       printf("        :o_o:                 |    Determined     |\n");
       printf("         '-'                  |__    _   __    ___|\n");
       printf("                            =(_____________________)=\n");
        }
         else
       printf("\nERROR: SORRY I CAN'T DISPLAY YOUR CHINESE ZODIAC, YOU HAVE ENTER AN OUT OF RANGE YEAR ");
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
    }
         break ;

         case 12:
    {    char let1;
         do{
         system("cls");
         float one,two,result;
         char op;
       system("cls");
       printf("ENTER THE FIRST NUMBER: ");
       scanf("%f",&one);
       printf("ENTER THE SECOND NUMBER: ");
       scanf("%f",&two);
       printf("ENTER THE OPERATION SYMBOL[+][/][-][*]: ");
       scanf("%s",&op);

       switch(op){
       case '+':
       result=one+two;
       printf("%.2f",result);
       break;
       case '-':
       result=one-two;
       printf("%.2f",result);
       break;
       case '*':
       result=one*two;
       printf("%.2f",result);
       break;
       case '/':
       result=one/two;
       printf("%.2f",result);
       break;
       default:
       printf("UNKNOWN INPUT");}
       printf("\n\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
       scanf("%s", &let1);
       }while (let1=='Y' ||let1=='y');
    }
        break ;

        case 13:
    {
       int num;
       printf("LOOPING\n");
       printf("[1]FOR LOOP: \n");
       printf("[2]DO WHILE: \n");
       printf("Choose a number: ");
       scanf("%d",&num);
        switch(num){
        case 1:
       {
         system("cls");
         char let;
         int x, stop;
          do{
           system("cls");
           printf("Enter the starting Value: ");
           scanf("%i", &x);

           printf("Enter the stop value: ");
           scanf("%i", &stop);


           for (x; x<=stop; x++) {
           printf("%d\n" ,x);}

           printf("\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s",&let);
           }while(let=='Y' ||let=='y');
        }
        break ;
        case 2:
       {
        system("cls");
        char let;
        int i;
        do{
           system("cls");
           do {
           printf("%i\n",i);

           i++;

           }while (i <= 10);

           printf("\nDO YOU WANT TO TRY AGAIN? [Y/N]:");
           scanf("%s",&let);
           }while(let=='Y' ||let=='y');
         }
         break ;
           default:
           printf_s("OUT OF RANGE");}
        }
        break ;
           default:
           printf_s("OUT OF RANGE");}
    }
    }
       printf("\nDO YOU WANT TO RETURN TO THE PROGRAM MENU? [Y/N]:");
       scanf("%s", &ret);
        }while (ret=='Y' || ret=='y');






    return 0;
    }
