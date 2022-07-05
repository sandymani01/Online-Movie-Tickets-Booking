#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void movie();
void theatre();
void timings();
void noofseats();
void billing();
void Exit();
void main()
{
    movie();
}
void movie()
   {
    int i,flag=0;
    printf("\n||=======================================================================||");

        printf("\n||                                                                       ||");

        printf("\n||                Welcome to Online Moive Ticket Booking                 ||");

        printf("\n||                                                                       ||");

    printf("\n||=======================================================================||\n");
	//printf("\t\t MOVIE TICKETS BOOKING");
	printf("\n||-----------------------------------------------------------------------||");
	printf("\n||                      Movies Available                                 ||");
	printf("\n||-----------------------------------------------------------------------||");
	printf("\n||          Press [1]: Alavaikuntapuramulo                               ||");
	printf("\n||          Press [2]:  Sarileru Nikevaru                                ||");
	printf("\n||          Press [3]:      Mahanati                                     ||");
	printf("\n||          Press [4]:     Happy days                                    ||");
	printf("\n||          Press [5]:     Sainikudu                                     ||");
	printf("\n||          Press [6]:        Exit                                       ||");
	//printf("\n1.Alavaikuntapuramulo\n2.sarileru nikevaru\n3.Mahanati\n4.Happy days\n5.sainikudu");
    printf("\n||=======================================================================||");
    printf("\n                     Enter your choice:");
    //printf("\n||=======================================================================||");
	scanf("%d",&i);
	if(i==1)
	{
	    printf("\n||-----------------------------------------------------------------------||");	
	    printf("\n||                         Alavaikuntapuramulo                           ||");
	    printf("\n||-----------------------------------------------------------------------||");
	}
	else if(i==2)
	{
		printf("\n||-----------------------------------------------------------------------||");
		printf("\n||                         sarileru nikevaru                             ||");
		printf("\n||-----------------------------------------------------------------------||");
	}
	else if(i==3)
	{
		printf("\n||-----------------------------------------------------------------------||");
	    printf("\n||                            Mahanati                                   ||");
	    printf("\n||-----------------------------------------------------------------------||");
	}
	else if(i==4)
	{
		printf("\n||-----------------------------------------------------------------------||");
	    printf("\n||                            Happy Days                                 ||");
	    printf("\n||-----------------------------------------------------------------------||");
    }
    else if(i==5)
	{
		printf("\n||-----------------------------------------------------------------------||");
        printf("\n||                             Sainikudu                                 ||");
        printf("\n||-----------------------------------------------------------------------||");
    }
    else 
    do{
	{
	   if(i=='6')
	   flag=1;
	}
	}while(flag==0);
    
	/*else
	{
    	printf("Enter correct number");
	}*/
    theatre();
}
void theatre()
{
    int a,flag=0;
    printf("\n||=======================================================================||");
    printf("\n||                             Theatres                                  ||");
    printf("\n||=======================================================================||");
	printf("\n||          Press [1]:          Asian Mall(Screen 2)                     ||");
	printf("\n||          Press [2]:             Ashoka                                ||");
	printf("\n||          Press [3]:          Vijayatalkies                            ||");
	printf("\n||          Press [4]:              S2(Screen 4)                         ||");
	printf("\n||          Press [5]:            Amurutha                               ||");
	printf("\n||          Press [6]:              Exit                                 ||");
	printf("\n||-----------------------------------------------------------------------||");
	//printf("\n1.Asian mall\n2.Sridevi\n3.Vijayatalkies\n4.S2\n5.Exit");
	printf("\n                     Enter your choice:");
	//printf("\nEnter your choice:");
	scanf("%d",&a);
	if(a==1)
	{ 
	  printf("\n||-----------------------------------------------------------------------||");
	  printf("\n||                      Asian mall(Screen 2)                             ||");
	  printf("\n||-----------------------------------------------------------------------||");
    }
	else if(a==2)
	{
	  printf("\n||-----------------------------------------------------------------------||");
	  printf("\n||                        Ashoka                                         ||");
	  printf("\n||-----------------------------------------------------------------------||");
    }
	else if(a==3)
	{
	  printf("\n||-----------------------------------------------------------------------||");
	  printf("\n||                     Vijayatalkies                                     ||");
	  printf("\n||-----------------------------------------------------------------------||");
	}
	else if(a==4)
	{
	   printf("\n||-----------------------------------------------------------------------||");
	   printf("\n||                         S2(Screen 4)                                  ||");
	   printf("\n||-----------------------------------------------------------------------||");
	}
	else if(a==5)
	{
	   printf("\n||-----------------------------------------------------------------------||");
	   printf("\n||                       Amurutha                                        ||");
	   printf("\n||-----------------------------------------------------------------------||");
	}
	else 
	 do{
	  {
	   if(a=='6')
	   flag=1;
	  }
	 }while(flag==0);
	/*else
	{
    	printf("\nEnter correct number");
	}*/
    timings();
}
void timings()
{
        int y,flag=0;
        printf("\n||=======================================================================||");
        printf("\n||                        Timings                                        ||");
        printf("\n||=======================================================================||");
        printf("\n||          Press [1]:    Morning Show                                   ||");
        printf("\n||          Press [2]:    Matinee Show                                   ||");
        printf("\n||          Press [3]:    Evening show                                   ||");
        printf("\n||          Press [4]:      Night show                                   ||");
        printf("\n||          Press [5]:         Exit                                      ||");
        printf("\n||-----------------------------------------------------------------------||");
		//printf("\n1.Morning show\n2.Matinee\n3.Evening show\n4.Night show\n5.Exit");
		printf("\n||                     Enter your choice: ");
		scanf("%d",&y);
		if(y==1)
		{
		  printf("\n||-----------------------------------------------------------------------||");
		  printf("\n||              Morning show(9:30am to 12:30pm)                          ||");
		  printf("\n||-----------------------------------------------------------------------||");
        }
		else if(y==2)
		{
		  printf("\n||-----------------------------------------------------------------------||");
		  printf("\n||            Matinee show(2:30pm to 5:30pm)");
		  printf("\n||-----------------------------------------------------------------------||");
		}
		else if(y==3)
		{
		  printf("\n||-----------------------------------------------------------------------||");
		  printf("\n||            Evening show(6:30pm to 9:00pm)                             ||");
		  printf("\n||-----------------------------------------------------------------------||");
		}
		else if(y==4)
		{
	      printf("\n||-----------------------------------------------------------------------||");
		  printf("\n||            Night show(9:30pm to 12:30am)                              ||");
		  printf("\n||-----------------------------------------------------------------------||");
		}
		else 
        do{
	       {
	         if(y=='5')
	         flag=1;
	        }
	      }while(flag==0);
		/*else
		{
    	  printf("Enter correct number");
	    }*/
    
        noofseats();
	    
}
void noofseats()
{
    int z,b,n,flag=0;
    printf("\n||=======================================================================||");
	printf("\n||                Enter no.of seats to book:");
	scanf("%d",&z);
	b=200*z;
	n=100-z;
	printf("\n||=======================================================================||");
	printf("\n||                     Total cost=%d",b);
	printf("\n||=======================================================================||");
	printf("\n                   No.of seats available :%d\n",n);
	billing();
	
}
void billing()
{
    int seats,mb_no;
	char name,row,movie_name;
	float cost,tot_amt;
	printf("\n\t\t                    *** Billing ***");
	printf("\n||=======================================================================||");
	printf("\n   Enter Name:\t");
	scanf("%s",&name);	
	printf("\n   Enter Mobile Number:\t");
	scanf("%d",&mb_no);
	printf("\n   Enter Movie Name:\t");
	scanf("%s",&movie_name);
	printf("\n   Enter Row:\t");
	scanf("%s",&row);
	printf("\n   Enter Total No Of Seats:\t");
	scanf("%d",&seats);
	printf("\n Enter Cost Per Ticket:\t");
	scanf("%f",&cost);
	printf("\n Enter Total Amount:\t");
	scanf("%f",&tot_amt);
	printf("\n||=======================================================================||");
	printf("\nTckets Booked successfully!!!\n*** ENJOY MOVIE ***");
}

